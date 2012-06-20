package org.TI2.game.RPG;

public class Item {
	private int id = 0;
	private String name = "";
	private PropertyData[] props;//w³aœciwoœci obiektu, np +1 do si³y
	private PropertyDataActivable[] activableProps;//w³aœciwoœci obiektu, np +1 do si³y
	private PropertyDataActivable[] activeProps;//w³aœciwoœci obiektu, np +1 do si³y
	private String longdesc = "";//d³ugi opis przedmiotu
	
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public PropertyData[] getProps() {
		return props;
	}
	public PropertyData getProp(int id) {
		return props[id];
	}
	public void setProps(PropertyData[] props) {
		this.props = props;
	}
	public void addProps(PropertyData props) {
		this.props[this.props.length] = props;
	}
	public String getLongdesc() {
		return longdesc;
	}
	public void setLongdesc(String longdesc) {
		this.longdesc = longdesc;
	}
	public void setActivableProps(PropertyDataActivable[] activableProps) {
		this.activableProps = activableProps;
	}
	public PropertyDataActivable[] getActivableProps() {
		return activableProps;
	}
	public void setActiveProps(PropertyDataActivable[] activeProps) {
		this.activeProps = activeProps;
	}
	public PropertyDataActivable[] getActiveProps() {
		return activeProps;
	}
}
