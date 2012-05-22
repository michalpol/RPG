package org.TI2.game.RPG;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class GameStateManager {

	GameState gs = null;
	
	public void LoadState(String path)
	{
		File savefile = new File(path);
		if(savefile.isFile()&&savefile.exists())
		{
			try {
					FileInputStream fis = new FileInputStream(savefile);
					ObjectInputStream ois = new ObjectInputStream(fis);
					gs = (GameState) ois.readObject();
					ois.close();
					fis.close();
			} catch (Exception e) {
				System.out.println("Exception Occured! Stacktrace:\n");
				e.printStackTrace();
			}
			
		}
		else
		{
			System.out.println("Save file path is not a valid save file path!");
		}
	}
	
	public boolean SaveState(String path)
	{
		File savefile = new File(path);
		if(savefile.exists()){savefile.delete();}
		try {
			savefile.createNewFile();
			FileOutputStream fos = new FileOutputStream(savefile);
			ObjectOutputStream oos = new ObjectOutputStream(fos);
			oos.writeObject(gs);
			oos.close();
			fos.close();
		} catch (Exception e) {
			System.out.println("Exception Occured! Stacktrace:\n");
			e.printStackTrace();
		}
		return false;	
	}
	
}
