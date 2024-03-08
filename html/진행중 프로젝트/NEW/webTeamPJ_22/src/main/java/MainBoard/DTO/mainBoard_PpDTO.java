package MainBoard.DTO;

public class mainBoard_PpDTO {
	private int IDX;
	private String TITLE;
	private String NICKNAME;
	private int isgood;
	private int viewcount;

	public int getViewcount() {
		return viewcount;
	}

	public void setViewcount(int viewcount) {
		this.viewcount = viewcount;
	}

	public int getIDX() {
		return IDX;
	}

	public void setIDX(int iDX) {
		IDX = iDX;
	}

	public String getTITLE() {
		return TITLE;
	}
	
	public String getNICKNAME() {
		return TITLE;
	}

	public void setNICKNAME(String tNICKNAME) {
		NICKNAME = tNICKNAME;
	}

	public void setTITLE(String tITLE) {
		TITLE = tITLE;
	}

	public int getIsgood() {
		return isgood;
	}

	public void setIsgood(int isgood) {
		this.isgood = isgood;
	}
}
