#ifndef _sun_awt_shell_Win32ShellFolder2_h_
#define _sun_awt_shell_Win32ShellFolder2_h_
//$ class sun.awt.shell.Win32ShellFolder2
//$ extends sun.awt.shell.ShellFolder

#include <java/lang/Array.h>
#include <sun/awt/shell/ShellFolder.h>

#pragma push_macro("ALTSTARTUP")
#undef ALTSTARTUP
#pragma push_macro("APPDATA")
#undef APPDATA
#pragma push_macro("ATTRIB_BROWSABLE")
#undef ATTRIB_BROWSABLE
#pragma push_macro("ATTRIB_CANCOPY")
#undef ATTRIB_CANCOPY
#pragma push_macro("ATTRIB_CANDELETE")
#undef ATTRIB_CANDELETE
#pragma push_macro("ATTRIB_CANLINK")
#undef ATTRIB_CANLINK
#pragma push_macro("ATTRIB_CANMOVE")
#undef ATTRIB_CANMOVE
#pragma push_macro("ATTRIB_CANRENAME")
#undef ATTRIB_CANRENAME
#pragma push_macro("ATTRIB_COMPRESSED")
#undef ATTRIB_COMPRESSED
#pragma push_macro("ATTRIB_DROPTARGET")
#undef ATTRIB_DROPTARGET
#pragma push_macro("ATTRIB_FILESYSANCESTOR")
#undef ATTRIB_FILESYSANCESTOR
#pragma push_macro("ATTRIB_FILESYSTEM")
#undef ATTRIB_FILESYSTEM
#pragma push_macro("ATTRIB_FOLDER")
#undef ATTRIB_FOLDER
#pragma push_macro("ATTRIB_GHOSTED")
#undef ATTRIB_GHOSTED
#pragma push_macro("ATTRIB_HASPROPSHEET")
#undef ATTRIB_HASPROPSHEET
#pragma push_macro("ATTRIB_HASSUBFOLDER")
#undef ATTRIB_HASSUBFOLDER
#pragma push_macro("ATTRIB_HIDDEN")
#undef ATTRIB_HIDDEN
#pragma push_macro("ATTRIB_LINK")
#undef ATTRIB_LINK
#pragma push_macro("ATTRIB_NEWCONTENT")
#undef ATTRIB_NEWCONTENT
#pragma push_macro("ATTRIB_NONENUMERATED")
#undef ATTRIB_NONENUMERATED
#pragma push_macro("ATTRIB_READONLY")
#undef ATTRIB_READONLY
#pragma push_macro("ATTRIB_REMOVABLE")
#undef ATTRIB_REMOVABLE
#pragma push_macro("ATTRIB_SHARE")
#undef ATTRIB_SHARE
#pragma push_macro("ATTRIB_VALIDATE")
#undef ATTRIB_VALIDATE
#pragma push_macro("BITBUCKET")
#undef BITBUCKET
#pragma push_macro("COMMON_ALTSTARTUP")
#undef COMMON_ALTSTARTUP
#pragma push_macro("COMMON_DESKTOPDIRECTORY")
#undef COMMON_DESKTOPDIRECTORY
#pragma push_macro("COMMON_FAVORITES")
#undef COMMON_FAVORITES
#pragma push_macro("COMMON_PROGRAMS")
#undef COMMON_PROGRAMS
#pragma push_macro("COMMON_STARTMENU")
#undef COMMON_STARTMENU
#pragma push_macro("COMMON_STARTUP")
#undef COMMON_STARTUP
#pragma push_macro("CONTROLS")
#undef CONTROLS
#pragma push_macro("COOKIES")
#undef COOKIES
#pragma push_macro("DESKTOP")
#undef DESKTOP
#pragma push_macro("DESKTOPDIRECTORY")
#undef DESKTOPDIRECTORY
#pragma push_macro("DRIVES")
#undef DRIVES
#pragma push_macro("FAVORITES")
#undef FAVORITES
#pragma push_macro("FDATE")
#undef FDATE
#pragma push_macro("FILE_ICON_ID")
#undef FILE_ICON_ID
#pragma push_macro("FNAME")
#undef FNAME
#pragma push_macro("FOLDER_ICON_ID")
#undef FOLDER_ICON_ID
#pragma push_macro("FONTS")
#undef FONTS
#pragma push_macro("FSIZE")
#undef FSIZE
#pragma push_macro("FTYPE")
#undef FTYPE
#pragma push_macro("HISTORY")
#undef HISTORY
#pragma push_macro("ICON_RESOLUTIONS")
#undef ICON_RESOLUTIONS
#pragma push_macro("INTERNET")
#undef INTERNET
#pragma push_macro("INTERNET_CACHE")
#undef INTERNET_CACHE
#pragma push_macro("LARGE_ICON_SIZE")
#undef LARGE_ICON_SIZE
#pragma push_macro("LVCFMT_CENTER")
#undef LVCFMT_CENTER
#pragma push_macro("LVCFMT_LEFT")
#undef LVCFMT_LEFT
#pragma push_macro("LVCFMT_RIGHT")
#undef LVCFMT_RIGHT
#pragma push_macro("MAX_QUALITY_ICON")
#undef MAX_QUALITY_ICON
#pragma push_macro("MIN_QUALITY_ICON")
#undef MIN_QUALITY_ICON
#pragma push_macro("NETHOOD")
#undef NETHOOD
#pragma push_macro("NETWORK")
#undef NETWORK
#pragma push_macro("PERSONAL")
#undef PERSONAL
#pragma push_macro("PRINTERS")
#undef PRINTERS
#pragma push_macro("PRINTHOOD")
#undef PRINTHOOD
#pragma push_macro("PROGRAMS")
#undef PROGRAMS
#pragma push_macro("RECENT")
#undef RECENT
#pragma push_macro("SENDTO")
#undef SENDTO
#pragma push_macro("SHGDN_FORADDRESSBAR")
#undef SHGDN_FORADDRESSBAR
#pragma push_macro("SHGDN_FORPARSING")
#undef SHGDN_FORPARSING
#pragma push_macro("SHGDN_INCLUDE_NONFILESYS")
#undef SHGDN_INCLUDE_NONFILESYS
#pragma push_macro("SHGDN_INFOLDER")
#undef SHGDN_INFOLDER
#pragma push_macro("SHGDN_NORMAL")
#undef SHGDN_NORMAL
#pragma push_macro("SMALL_ICON_SIZE")
#undef SMALL_ICON_SIZE
#pragma push_macro("STARTMENU")
#undef STARTMENU
#pragma push_macro("STARTUP")
#undef STARTUP
#pragma push_macro("TEMPLATES")
#undef TEMPLATES

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class ShellFolderColumnInfo;
			class Win32ShellFolder2$FolderDisposer;
			class Win32ShellFolder2$KnownFolderDefinition;
			class Win32ShellFolder2$SystemIcon;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2 : public ::sun::awt::shell::ShellFolder {
	$class(Win32ShellFolder2, 0, ::sun::awt::shell::ShellFolder)
public:
	Win32ShellFolder2();
	using ::sun::awt::shell::ShellFolder::listFiles;
	void init$(int32_t csidl);
	void init$(::sun::awt::shell::Win32ShellFolder2* parent, int64_t pIShellFolder, int64_t relativePIDL, $String* path, bool isLib);
	static ::java::awt::Image* access$001(::sun::awt::shell::Win32ShellFolder2* x0, bool x1);
	static int64_t bindToObject(int64_t parentIShellFolder, int64_t pIDL);
	static int64_t combinePIDLs(int64_t ppIDL, int64_t pIDL);
	static int32_t compareIDs(int64_t pParentIShellFolder, int64_t pidl1, int64_t pidl2);
	static int32_t compareIDsByColumn(int64_t pParentIShellFolder, int64_t pidl1, int64_t pidl2, int32_t columnIdx);
	virtual int32_t compareTo(::java::io::File* file2) override;
	virtual int32_t compareTo(Object$* file2) override;
	static $String* composePathForCsidl(int32_t csidl);
	static int64_t copyFirstPIDLEntry(int64_t pIDL);
	static ::sun::awt::shell::Win32ShellFolder2* createShellFolder(::sun::awt::shell::Win32ShellFolder2* parent, int64_t pIDL);
	void dispose();
	static void disposeIcon(int64_t hIcon);
	$Array<::sun::awt::shell::ShellFolderColumnInfo>* doGetColumnInfo(int64_t iShellFolder2);
	$Object* doGetColumnValue(int64_t parentIShellFolder2, int64_t childPIDL, int32_t columnIdx);
	virtual bool equals(Object$* o) override;
	static int64_t extractIcon(int64_t parentIShellFolder, int64_t relativePIDL, int32_t size, bool getDefaultIcon);
	int64_t getAbsolutePIDL();
	static int32_t getAttributes0(int64_t pParentIShellFolder, int64_t pIDL, int32_t attrsMask);
	virtual ::java::io::File* getCanonicalFile() override;
	::sun::awt::shell::Win32ShellFolder2* getChildByPath($String* filePath);
	::sun::awt::shell::Win32ShellFolder2* getDesktop();
	int64_t getDesktopIShellFolder();
	virtual $String* getDisplayName() override;
	static $String* getDisplayNameOf(int64_t parentIShellFolder, int64_t relativePIDL, int32_t attrs);
	int64_t getEnumObjects(bool includeHiddenFiles);
	int64_t getEnumObjects(int64_t pIShellFolder, bool isDesktop, bool includeHiddenFiles);
	$String* getExecutableType($String* path);
	virtual $String* getExecutableType() override;
	static $String* getFileSystemPath(int64_t parentIShellFolder, int64_t relativePIDL);
	static $String* getFileSystemPath(int32_t csidl);
	static $String* getFileSystemPath0(int32_t csidl);
	virtual $Object* getFolderColumnValue(int32_t column) override;
	virtual $Array<::sun::awt::shell::ShellFolderColumnInfo>* getFolderColumns() override;
	static $String* getFolderType(int64_t pIDL);
	virtual $String* getFolderType() override;
	int64_t getIShellFolder();
	static int64_t getIShellIcon(int64_t pIShellFolder);
	int64_t getIShellIcon();
	static int64_t getIcon($String* absolutePath, bool getLargeIcon);
	virtual ::java::awt::Image* getIcon(bool getLargeIcon) override;
	virtual ::java::awt::Image* getIcon(int32_t width, int32_t height) override;
	static $ints* getIconBits(int64_t hIcon);
	static int32_t getIconIndex(int64_t parentIShellIcon, int64_t relativePIDL);
	static int64_t getIconResource($String* libName, int32_t iconID, int32_t cxDesired, int32_t cyDesired);
	static ::java::util::List* getLibraries();
	static int64_t getLinkLocation(int64_t parentIShellFolder, int64_t relativePIDL, bool resolve);
	virtual ::sun::awt::shell::ShellFolder* getLinkLocation() override;
	::sun::awt::shell::Win32ShellFolder2* getLinkLocation(bool resolve);
	int64_t getNextChild(int64_t pEnumObjects);
	static int64_t getNextPIDLEntry(int64_t pIDL);
	virtual ::java::io::File* getParentFile() override;
	int64_t getParentIShellFolder();
	int64_t getRelativePIDL();
	static ::java::awt::Image* getShell32Icon(int32_t iconID, int32_t size);
	static $ints* getStandardViewButton0(int32_t iconIndex, bool small);
	static int64_t getSystemIcon(int32_t iconID);
	static ::java::awt::Image* getSystemIcon(::sun::awt::shell::Win32ShellFolder2$SystemIcon* iconType);
	bool hasAttribute(int32_t attribute);
	static bool hiResIconAvailable(int64_t parentIShellFolder, int64_t relativePIDL);
	void initDesktop();
	static void initIDs();
	void initSpecial(int64_t desktopIShellFolder, int32_t csidl);
	virtual bool isDirectory() override;
	virtual bool isFileSystem() override;
	virtual bool isHidden() override;
	bool isLibrary();
	virtual bool isLink() override;
	static bool isNetworkRoot($String* path);
	bool isSpecial();
	::java::awt::Image* lambda$getIcon$0(int32_t size);
	virtual $Array<::java::io::File>* listFiles(bool includeHiddenFiles) override;
	static $Array<::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition>* loadKnownFolders();
	static ::java::awt::Image* makeIcon(int64_t hIcon);
	int64_t parseDisplayName($String* name);
	static int64_t parseDisplayName0(int64_t pIShellFolder, $String* name);
	static bool pathsEqual($String* path1, $String* path2);
	static bool pidlsEqual(int64_t pIShellFolder, int64_t pidl1, int64_t pidl2);
	void releaseEnumObjects(int64_t pEnumObjects);
	static void releaseIShellFolder(int64_t pIShellFolder);
	static void releasePIDL(int64_t pIDL);
	static $String* resolveLibrary($String* path);
	::sun::awt::shell::ShellFolder* resolveLibrary();
	void setIShellFolder(int64_t pIShellFolder);
	void setIsPersonal();
	void setRelativePIDL(int64_t relativePIDL);
	virtual void sortChildren(::java::util::List* files) override;
	virtual $Object* writeReplace() override;
	static const int32_t SMALL_ICON_SIZE = 16;
	static const int32_t LARGE_ICON_SIZE = 32;
	static const int32_t MIN_QUALITY_ICON = 16;
	static const int32_t MAX_QUALITY_ICON = 256;
	static $ints* ICON_RESOLUTIONS;
	static const int32_t FILE_ICON_ID = 1;
	static const int32_t FOLDER_ICON_ID = 4;
	static const int32_t DESKTOP = 0;
	static const int32_t INTERNET = 1;
	static const int32_t PROGRAMS = 2;
	static const int32_t CONTROLS = 3;
	static const int32_t PRINTERS = 4;
	static const int32_t PERSONAL = 5;
	static const int32_t FAVORITES = 6;
	static const int32_t STARTUP = 7;
	static const int32_t RECENT = 8;
	static const int32_t SENDTO = 9;
	static const int32_t BITBUCKET = 10;
	static const int32_t STARTMENU = 11;
	static const int32_t DESKTOPDIRECTORY = 16;
	static const int32_t DRIVES = 17;
	static const int32_t NETWORK = 18;
	static const int32_t NETHOOD = 19;
	static const int32_t FONTS = 20;
	static const int32_t TEMPLATES = 21;
	static const int32_t COMMON_STARTMENU = 22;
	static const int32_t COMMON_PROGRAMS = 23;
	static const int32_t COMMON_STARTUP = 24;
	static const int32_t COMMON_DESKTOPDIRECTORY = 25;
	static const int32_t APPDATA = 26;
	static const int32_t PRINTHOOD = 27;
	static const int32_t ALTSTARTUP = 29;
	static const int32_t COMMON_ALTSTARTUP = 30;
	static const int32_t COMMON_FAVORITES = 31;
	static const int32_t INTERNET_CACHE = 32;
	static const int32_t COOKIES = 33;
	static const int32_t HISTORY = 34;
	static const int32_t ATTRIB_CANCOPY = 1;
	static const int32_t ATTRIB_CANMOVE = 2;
	static const int32_t ATTRIB_CANLINK = 4;
	static const int32_t ATTRIB_CANRENAME = 16;
	static const int32_t ATTRIB_CANDELETE = 32;
	static const int32_t ATTRIB_HASPROPSHEET = 64;
	static const int32_t ATTRIB_DROPTARGET = 256;
	static const int32_t ATTRIB_LINK = 0x00010000;
	static const int32_t ATTRIB_SHARE = 0x00020000;
	static const int32_t ATTRIB_READONLY = 0x00040000;
	static const int32_t ATTRIB_GHOSTED = 0x00080000;
	static const int32_t ATTRIB_HIDDEN = 0x00080000;
	static const int32_t ATTRIB_FILESYSANCESTOR = 0x10000000;
	static const int32_t ATTRIB_FOLDER = 0x20000000;
	static const int32_t ATTRIB_FILESYSTEM = 0x40000000;
	static const int32_t ATTRIB_HASSUBFOLDER = 0x80000000;
	static const int32_t ATTRIB_VALIDATE = 0x01000000;
	static const int32_t ATTRIB_REMOVABLE = 0x02000000;
	static const int32_t ATTRIB_COMPRESSED = 0x04000000;
	static const int32_t ATTRIB_BROWSABLE = 0x08000000;
	static const int32_t ATTRIB_NONENUMERATED = 0x00100000;
	static const int32_t ATTRIB_NEWCONTENT = 0x00200000;
	static const int32_t SHGDN_NORMAL = 0;
	static const int32_t SHGDN_INFOLDER = 1;
	static const int32_t SHGDN_INCLUDE_NONFILESYS = 8192;
	static const int32_t SHGDN_FORADDRESSBAR = 16384;
	static const int32_t SHGDN_FORPARSING = 32768;
	$Object* disposerReferent = nullptr;
	::sun::awt::shell::Win32ShellFolder2$FolderDisposer* disposer = nullptr;
	int64_t pIShellIcon = 0;
	$String* folderType = nullptr;
	$String* displayName = nullptr;
	::java::awt::Image* smallIcon = nullptr;
	::java::awt::Image* largeIcon = nullptr;
	::java::lang::Boolean* isDir = nullptr;
	bool isLib = false;
	static $String* FNAME;
	static $String* FSIZE;
	static $String* FTYPE;
	static $String* FDATE;
	bool isPersonal = false;
	$volatile(::java::lang::Boolean*) cachedIsFileSystem = nullptr;
	$volatile(::java::lang::Boolean*) cachedIsLink = nullptr;
	static ::java::util::Map* smallSystemImages;
	static ::java::util::Map* largeSystemImages;
	static ::java::util::Map* smallLinkedSystemImages;
	static ::java::util::Map* largeLinkedSystemImages;
	static const int32_t LVCFMT_LEFT = 0;
	static const int32_t LVCFMT_RIGHT = 1;
	static const int32_t LVCFMT_CENTER = 2;
};

		} // shell
	} // awt
} // sun

#pragma pop_macro("ALTSTARTUP")
#pragma pop_macro("APPDATA")
#pragma pop_macro("ATTRIB_BROWSABLE")
#pragma pop_macro("ATTRIB_CANCOPY")
#pragma pop_macro("ATTRIB_CANDELETE")
#pragma pop_macro("ATTRIB_CANLINK")
#pragma pop_macro("ATTRIB_CANMOVE")
#pragma pop_macro("ATTRIB_CANRENAME")
#pragma pop_macro("ATTRIB_COMPRESSED")
#pragma pop_macro("ATTRIB_DROPTARGET")
#pragma pop_macro("ATTRIB_FILESYSANCESTOR")
#pragma pop_macro("ATTRIB_FILESYSTEM")
#pragma pop_macro("ATTRIB_FOLDER")
#pragma pop_macro("ATTRIB_GHOSTED")
#pragma pop_macro("ATTRIB_HASPROPSHEET")
#pragma pop_macro("ATTRIB_HASSUBFOLDER")
#pragma pop_macro("ATTRIB_HIDDEN")
#pragma pop_macro("ATTRIB_LINK")
#pragma pop_macro("ATTRIB_NEWCONTENT")
#pragma pop_macro("ATTRIB_NONENUMERATED")
#pragma pop_macro("ATTRIB_READONLY")
#pragma pop_macro("ATTRIB_REMOVABLE")
#pragma pop_macro("ATTRIB_SHARE")
#pragma pop_macro("ATTRIB_VALIDATE")
#pragma pop_macro("BITBUCKET")
#pragma pop_macro("COMMON_ALTSTARTUP")
#pragma pop_macro("COMMON_DESKTOPDIRECTORY")
#pragma pop_macro("COMMON_FAVORITES")
#pragma pop_macro("COMMON_PROGRAMS")
#pragma pop_macro("COMMON_STARTMENU")
#pragma pop_macro("COMMON_STARTUP")
#pragma pop_macro("CONTROLS")
#pragma pop_macro("COOKIES")
#pragma pop_macro("DESKTOP")
#pragma pop_macro("DESKTOPDIRECTORY")
#pragma pop_macro("DRIVES")
#pragma pop_macro("FAVORITES")
#pragma pop_macro("FDATE")
#pragma pop_macro("FILE_ICON_ID")
#pragma pop_macro("FNAME")
#pragma pop_macro("FOLDER_ICON_ID")
#pragma pop_macro("FONTS")
#pragma pop_macro("FSIZE")
#pragma pop_macro("FTYPE")
#pragma pop_macro("HISTORY")
#pragma pop_macro("ICON_RESOLUTIONS")
#pragma pop_macro("INTERNET")
#pragma pop_macro("INTERNET_CACHE")
#pragma pop_macro("LARGE_ICON_SIZE")
#pragma pop_macro("LVCFMT_CENTER")
#pragma pop_macro("LVCFMT_LEFT")
#pragma pop_macro("LVCFMT_RIGHT")
#pragma pop_macro("MAX_QUALITY_ICON")
#pragma pop_macro("MIN_QUALITY_ICON")
#pragma pop_macro("NETHOOD")
#pragma pop_macro("NETWORK")
#pragma pop_macro("PERSONAL")
#pragma pop_macro("PRINTERS")
#pragma pop_macro("PRINTHOOD")
#pragma pop_macro("PROGRAMS")
#pragma pop_macro("RECENT")
#pragma pop_macro("SENDTO")
#pragma pop_macro("SHGDN_FORADDRESSBAR")
#pragma pop_macro("SHGDN_FORPARSING")
#pragma pop_macro("SHGDN_INCLUDE_NONFILESYS")
#pragma pop_macro("SHGDN_INFOLDER")
#pragma pop_macro("SHGDN_NORMAL")
#pragma pop_macro("SMALL_ICON_SIZE")
#pragma pop_macro("STARTMENU")
#pragma pop_macro("STARTUP")
#pragma pop_macro("TEMPLATES")

#endif // _sun_awt_shell_Win32ShellFolder2_h_