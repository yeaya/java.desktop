#include <sun/awt/shell/Win32ShellFolder2.h>

#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/awt/shell/Win32ShellFolder2$1.h>
#include <sun/awt/shell/Win32ShellFolder2$10.h>
#include <sun/awt/shell/Win32ShellFolder2$11.h>
#include <sun/awt/shell/Win32ShellFolder2$12.h>
#include <sun/awt/shell/Win32ShellFolder2$13.h>
#include <sun/awt/shell/Win32ShellFolder2$14.h>
#include <sun/awt/shell/Win32ShellFolder2$15.h>
#include <sun/awt/shell/Win32ShellFolder2$16.h>
#include <sun/awt/shell/Win32ShellFolder2$17.h>
#include <sun/awt/shell/Win32ShellFolder2$18.h>
#include <sun/awt/shell/Win32ShellFolder2$19.h>
#include <sun/awt/shell/Win32ShellFolder2$2.h>
#include <sun/awt/shell/Win32ShellFolder2$3.h>
#include <sun/awt/shell/Win32ShellFolder2$4.h>
#include <sun/awt/shell/Win32ShellFolder2$5.h>
#include <sun/awt/shell/Win32ShellFolder2$6.h>
#include <sun/awt/shell/Win32ShellFolder2$7.h>
#include <sun/awt/shell/Win32ShellFolder2$8.h>
#include <sun/awt/shell/Win32ShellFolder2$9.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2$KnownFolderDefinition.h>
#include <sun/awt/shell/Win32ShellFolder2$KnownLibraries.h>
#include <sun/awt/shell/Win32ShellFolder2$MultiResolutionIconImage.h>
#include <sun/awt/shell/Win32ShellFolder2$SystemIcon.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

#undef ALTSTARTUP
#undef APPDATA
#undef ATTRIB_BROWSABLE
#undef ATTRIB_CANCOPY
#undef ATTRIB_CANDELETE
#undef ATTRIB_CANLINK
#undef ATTRIB_CANMOVE
#undef ATTRIB_CANRENAME
#undef ATTRIB_COMPRESSED
#undef ATTRIB_DROPTARGET
#undef ATTRIB_FILESYSANCESTOR
#undef ATTRIB_FILESYSTEM
#undef ATTRIB_FOLDER
#undef ATTRIB_GHOSTED
#undef ATTRIB_HASPROPSHEET
#undef ATTRIB_HASSUBFOLDER
#undef ATTRIB_HIDDEN
#undef ATTRIB_LINK
#undef ATTRIB_NEWCONTENT
#undef ATTRIB_NONENUMERATED
#undef ATTRIB_READONLY
#undef ATTRIB_REMOVABLE
#undef ATTRIB_SHARE
#undef ATTRIB_VALIDATE
#undef BITBUCKET
#undef COLUMN_DATE
#undef COLUMN_NAME
#undef COLUMN_SIZE
#undef COMMON_ALTSTARTUP
#undef COMMON_DESKTOPDIRECTORY
#undef COMMON_FAVORITES
#undef COMMON_PROGRAMS
#undef COMMON_STARTMENU
#undef COMMON_STARTUP
#undef CONTROLS
#undef COOKIES
#undef DESKTOP
#undef DESKTOPDIRECTORY
#undef DRIVES
#undef FALSE
#undef FAVORITES
#undef FDATE
#undef FILE_ICON_ID
#undef FNAME
#undef FOLDER_ICON_ID
#undef FONTS
#undef FSIZE
#undef FTYPE
#undef HISTORY
#undef ICON_RESOLUTIONS
#undef INSTANCE
#undef INTERNET
#undef INTERNET_CACHE
#undef LARGE_ICON_SIZE
#undef LVCFMT_CENTER
#undef LVCFMT_LEFT
#undef LVCFMT_RIGHT
#undef MAX_QUALITY_ICON
#undef MIN_QUALITY_ICON
#undef NETHOOD
#undef NETWORK
#undef PERSONAL
#undef PRINTERS
#undef PRINTHOOD
#undef PROGRAMS
#undef RECENT
#undef SENDTO
#undef SHGDN_FORADDRESSBAR
#undef SHGDN_FORPARSING
#undef SHGDN_INCLUDE_NONFILESYS
#undef SHGDN_INFOLDER
#undef SHGDN_NORMAL
#undef SMALL_ICON_SIZE
#undef STARTMENU
#undef STARTUP
#undef TEMPLATES
#undef TRUE
#undef TYPE_INT_ARGB

using $FileArray = $Array<::java::io::File>;
using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $Win32ShellFolder2$KnownFolderDefinitionArray = $Array<::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition>;
using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2$1 = ::sun::awt::shell::Win32ShellFolder2$1;
using $Win32ShellFolder2$10 = ::sun::awt::shell::Win32ShellFolder2$10;
using $Win32ShellFolder2$11 = ::sun::awt::shell::Win32ShellFolder2$11;
using $Win32ShellFolder2$12 = ::sun::awt::shell::Win32ShellFolder2$12;
using $Win32ShellFolder2$13 = ::sun::awt::shell::Win32ShellFolder2$13;
using $Win32ShellFolder2$14 = ::sun::awt::shell::Win32ShellFolder2$14;
using $Win32ShellFolder2$15 = ::sun::awt::shell::Win32ShellFolder2$15;
using $Win32ShellFolder2$16 = ::sun::awt::shell::Win32ShellFolder2$16;
using $Win32ShellFolder2$17 = ::sun::awt::shell::Win32ShellFolder2$17;
using $Win32ShellFolder2$18 = ::sun::awt::shell::Win32ShellFolder2$18;
using $Win32ShellFolder2$19 = ::sun::awt::shell::Win32ShellFolder2$19;
using $Win32ShellFolder2$2 = ::sun::awt::shell::Win32ShellFolder2$2;
using $Win32ShellFolder2$3 = ::sun::awt::shell::Win32ShellFolder2$3;
using $Win32ShellFolder2$4 = ::sun::awt::shell::Win32ShellFolder2$4;
using $Win32ShellFolder2$5 = ::sun::awt::shell::Win32ShellFolder2$5;
using $Win32ShellFolder2$6 = ::sun::awt::shell::Win32ShellFolder2$6;
using $Win32ShellFolder2$7 = ::sun::awt::shell::Win32ShellFolder2$7;
using $Win32ShellFolder2$8 = ::sun::awt::shell::Win32ShellFolder2$8;
using $Win32ShellFolder2$9 = ::sun::awt::shell::Win32ShellFolder2$9;
using $Win32ShellFolder2$FolderDisposer = ::sun::awt::shell::Win32ShellFolder2$FolderDisposer;
using $Win32ShellFolder2$KnownFolderDefinition = ::sun::awt::shell::Win32ShellFolder2$KnownFolderDefinition;
using $Win32ShellFolder2$KnownLibraries = ::sun::awt::shell::Win32ShellFolder2$KnownLibraries;
using $Win32ShellFolder2$MultiResolutionIconImage = ::sun::awt::shell::Win32ShellFolder2$MultiResolutionIconImage;
using $Win32ShellFolder2$SystemIcon = ::sun::awt::shell::Win32ShellFolder2$SystemIcon;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace awt {
		namespace shell {

class Win32ShellFolder2$$Lambda$lambda$getIcon$0 : public $Callable {
	$class(Win32ShellFolder2$$Lambda$lambda$getIcon$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(Win32ShellFolder2* inst, int32_t size) {
		$set(this, inst$, inst);
		this->size = size;
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->lambda$getIcon$0(size));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Win32ShellFolder2$$Lambda$lambda$getIcon$0>());
	}
	Win32ShellFolder2* inst$ = nullptr;
	int32_t size = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Win32ShellFolder2$$Lambda$lambda$getIcon$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Win32ShellFolder2$$Lambda$lambda$getIcon$0, inst$)},
	{"size", "I", nullptr, $PUBLIC, $field(Win32ShellFolder2$$Lambda$lambda$getIcon$0, size)},
	{}
};
$MethodInfo Win32ShellFolder2$$Lambda$lambda$getIcon$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolder2$$Lambda$lambda$getIcon$0::*)(Win32ShellFolder2*,int32_t)>(&Win32ShellFolder2$$Lambda$lambda$getIcon$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Win32ShellFolder2$$Lambda$lambda$getIcon$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.shell.Win32ShellFolder2$$Lambda$lambda$getIcon$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* Win32ShellFolder2$$Lambda$lambda$getIcon$0::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$$Lambda$lambda$getIcon$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Win32ShellFolder2$$Lambda$lambda$getIcon$0::class$ = nullptr;

$FieldInfo _Win32ShellFolder2_FieldInfo_[] = {
	{"SMALL_ICON_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Win32ShellFolder2, SMALL_ICON_SIZE)},
	{"LARGE_ICON_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Win32ShellFolder2, LARGE_ICON_SIZE)},
	{"MIN_QUALITY_ICON", "I", nullptr, $STATIC | $FINAL, $constField(Win32ShellFolder2, MIN_QUALITY_ICON)},
	{"MAX_QUALITY_ICON", "I", nullptr, $STATIC | $FINAL, $constField(Win32ShellFolder2, MAX_QUALITY_ICON)},
	{"ICON_RESOLUTIONS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolder2, ICON_RESOLUTIONS)},
	{"FILE_ICON_ID", "I", nullptr, $STATIC | $FINAL, $constField(Win32ShellFolder2, FILE_ICON_ID)},
	{"FOLDER_ICON_ID", "I", nullptr, $STATIC | $FINAL, $constField(Win32ShellFolder2, FOLDER_ICON_ID)},
	{"DESKTOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, DESKTOP)},
	{"INTERNET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, INTERNET)},
	{"PROGRAMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, PROGRAMS)},
	{"CONTROLS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, CONTROLS)},
	{"PRINTERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, PRINTERS)},
	{"PERSONAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, PERSONAL)},
	{"FAVORITES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, FAVORITES)},
	{"STARTUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, STARTUP)},
	{"RECENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, RECENT)},
	{"SENDTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, SENDTO)},
	{"BITBUCKET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, BITBUCKET)},
	{"STARTMENU", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, STARTMENU)},
	{"DESKTOPDIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, DESKTOPDIRECTORY)},
	{"DRIVES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, DRIVES)},
	{"NETWORK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, NETWORK)},
	{"NETHOOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, NETHOOD)},
	{"FONTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, FONTS)},
	{"TEMPLATES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, TEMPLATES)},
	{"COMMON_STARTMENU", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COMMON_STARTMENU)},
	{"COMMON_PROGRAMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COMMON_PROGRAMS)},
	{"COMMON_STARTUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COMMON_STARTUP)},
	{"COMMON_DESKTOPDIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COMMON_DESKTOPDIRECTORY)},
	{"APPDATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, APPDATA)},
	{"PRINTHOOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, PRINTHOOD)},
	{"ALTSTARTUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ALTSTARTUP)},
	{"COMMON_ALTSTARTUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COMMON_ALTSTARTUP)},
	{"COMMON_FAVORITES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COMMON_FAVORITES)},
	{"INTERNET_CACHE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, INTERNET_CACHE)},
	{"COOKIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, COOKIES)},
	{"HISTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, HISTORY)},
	{"ATTRIB_CANCOPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_CANCOPY)},
	{"ATTRIB_CANMOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_CANMOVE)},
	{"ATTRIB_CANLINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_CANLINK)},
	{"ATTRIB_CANRENAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_CANRENAME)},
	{"ATTRIB_CANDELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_CANDELETE)},
	{"ATTRIB_HASPROPSHEET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_HASPROPSHEET)},
	{"ATTRIB_DROPTARGET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_DROPTARGET)},
	{"ATTRIB_LINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_LINK)},
	{"ATTRIB_SHARE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_SHARE)},
	{"ATTRIB_READONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_READONLY)},
	{"ATTRIB_GHOSTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_GHOSTED)},
	{"ATTRIB_HIDDEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_HIDDEN)},
	{"ATTRIB_FILESYSANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_FILESYSANCESTOR)},
	{"ATTRIB_FOLDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_FOLDER)},
	{"ATTRIB_FILESYSTEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_FILESYSTEM)},
	{"ATTRIB_HASSUBFOLDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_HASSUBFOLDER)},
	{"ATTRIB_VALIDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_VALIDATE)},
	{"ATTRIB_REMOVABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_REMOVABLE)},
	{"ATTRIB_COMPRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_COMPRESSED)},
	{"ATTRIB_BROWSABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_BROWSABLE)},
	{"ATTRIB_NONENUMERATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_NONENUMERATED)},
	{"ATTRIB_NEWCONTENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, ATTRIB_NEWCONTENT)},
	{"SHGDN_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, SHGDN_NORMAL)},
	{"SHGDN_INFOLDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, SHGDN_INFOLDER)},
	{"SHGDN_INCLUDE_NONFILESYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, SHGDN_INCLUDE_NONFILESYS)},
	{"SHGDN_FORADDRESSBAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, SHGDN_FORADDRESSBAR)},
	{"SHGDN_FORPARSING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Win32ShellFolder2, SHGDN_FORPARSING)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Win32ShellFolder2, disposerReferent)},
	{"disposer", "Lsun/awt/shell/Win32ShellFolder2$FolderDisposer;", nullptr, 0, $field(Win32ShellFolder2, disposer)},
	{"pIShellIcon", "J", nullptr, $PRIVATE, $field(Win32ShellFolder2, pIShellIcon)},
	{"folderType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Win32ShellFolder2, folderType)},
	{"displayName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Win32ShellFolder2, displayName)},
	{"smallIcon", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(Win32ShellFolder2, smallIcon)},
	{"largeIcon", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(Win32ShellFolder2, largeIcon)},
	{"isDir", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(Win32ShellFolder2, isDir)},
	{"isLib", "Z", nullptr, $PRIVATE | $FINAL, $field(Win32ShellFolder2, isLib)},
	{"FNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolder2, FNAME)},
	{"FSIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolder2, FSIZE)},
	{"FTYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolder2, FTYPE)},
	{"FDATE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32ShellFolder2, FDATE)},
	{"isPersonal", "Z", nullptr, $PRIVATE, $field(Win32ShellFolder2, isPersonal)},
	{"cachedIsFileSystem", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $VOLATILE, $field(Win32ShellFolder2, cachedIsFileSystem)},
	{"cachedIsLink", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $VOLATILE, $field(Win32ShellFolder2, cachedIsLink)},
	{"smallSystemImages", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(Win32ShellFolder2, smallSystemImages)},
	{"largeSystemImages", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(Win32ShellFolder2, largeSystemImages)},
	{"smallLinkedSystemImages", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(Win32ShellFolder2, smallLinkedSystemImages)},
	{"largeLinkedSystemImages", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(Win32ShellFolder2, largeLinkedSystemImages)},
	{"LVCFMT_LEFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolder2, LVCFMT_LEFT)},
	{"LVCFMT_RIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolder2, LVCFMT_RIGHT)},
	{"LVCFMT_CENTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ShellFolder2, LVCFMT_CENTER)},
	{}
};

$MethodInfo _Win32ShellFolder2_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2::*)(int32_t)>(&Win32ShellFolder2::init$)), "java.io.IOException,java.lang.InterruptedException"},
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;JJLjava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2::*)(Win32ShellFolder2*,int64_t,int64_t,$String*,bool)>(&Win32ShellFolder2::init$))},
	{"access$001", "(Lsun/awt/shell/Win32ShellFolder2;Z)Ljava/awt/Image;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Image*(*)(Win32ShellFolder2*,bool)>(&Win32ShellFolder2::access$001))},
	{"bindToObject", "(JJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Win32ShellFolder2::bindToObject))},
	{"combinePIDLs", "(JJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&Win32ShellFolder2::combinePIDLs))},
	{"compareIDs", "(JJJ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t)>(&Win32ShellFolder2::compareIDs))},
	{"compareIDsByColumn", "(JJJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int32_t)>(&Win32ShellFolder2::compareIDsByColumn))},
	{"compareTo", "(Ljava/io/File;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"composePathForCsidl", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Win32ShellFolder2::composePathForCsidl)), "java.io.IOException,java.lang.InterruptedException"},
	{"copyFirstPIDLEntry", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&Win32ShellFolder2::copyFirstPIDLEntry))},
	{"createShellFolder", "(Lsun/awt/shell/Win32ShellFolder2;J)Lsun/awt/shell/Win32ShellFolder2;", nullptr, $STATIC, $method(static_cast<Win32ShellFolder2*(*)(Win32ShellFolder2*,int64_t)>(&Win32ShellFolder2::createShellFolder)), "java.lang.InterruptedException"},
	{"dispose", "()V", nullptr, $PROTECTED, $method(static_cast<void(Win32ShellFolder2::*)()>(&Win32ShellFolder2::dispose))},
	{"disposeIcon", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Win32ShellFolder2::disposeIcon))},
	{"doGetColumnInfo", "(J)[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ShellFolderColumnInfoArray*(Win32ShellFolder2::*)(int64_t)>(&Win32ShellFolder2::doGetColumnInfo))},
	{"doGetColumnValue", "(JJI)Ljava/lang/Object;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Object*(Win32ShellFolder2::*)(int64_t,int64_t,int32_t)>(&Win32ShellFolder2::doGetColumnValue))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"extractIcon", "(JJIZ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int32_t,bool)>(&Win32ShellFolder2::extractIcon))},
	{"getAbsolutePIDL", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getAbsolutePIDL))},
	{"getAttributes0", "(JJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t)>(&Win32ShellFolder2::getAttributes0))},
	{"getCanonicalFile", "()Ljava/io/File;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getChildByPath", "(Ljava/lang/String;)Lsun/awt/shell/Win32ShellFolder2;", nullptr, 0, $method(static_cast<Win32ShellFolder2*(Win32ShellFolder2::*)($String*)>(&Win32ShellFolder2::getChildByPath)), "java.lang.InterruptedException"},
	{"getDesktop", "()Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PUBLIC, $method(static_cast<Win32ShellFolder2*(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getDesktop))},
	{"getDesktopIShellFolder", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getDesktopIShellFolder))},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayNameOf", "(JJI)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t,int64_t,int32_t)>(&Win32ShellFolder2::getDisplayNameOf))},
	{"getEnumObjects", "(Z)J", nullptr, $PRIVATE, $method(static_cast<int64_t(Win32ShellFolder2::*)(bool)>(&Win32ShellFolder2::getEnumObjects)), "java.lang.InterruptedException"},
	{"getEnumObjects", "(JZZ)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Win32ShellFolder2::*)(int64_t,bool,bool)>(&Win32ShellFolder2::getEnumObjects))},
	{"getExecutableType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(Win32ShellFolder2::*)($String*)>(&Win32ShellFolder2::getExecutableType))},
	{"getExecutableType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileSystemPath", "(JJ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int64_t,int64_t)>(&Win32ShellFolder2::getFileSystemPath))},
	{"getFileSystemPath", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Win32ShellFolder2::getFileSystemPath)), "java.io.IOException,java.lang.InterruptedException"},
	{"getFileSystemPath0", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&Win32ShellFolder2::getFileSystemPath0)), "java.io.IOException"},
	{"getFolderColumnValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFolderColumns", "()[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC},
	{"getFolderType", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&Win32ShellFolder2::getFolderType))},
	{"getFolderType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIShellFolder", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getIShellFolder))},
	{"getIShellIcon", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&Win32ShellFolder2::getIShellIcon))},
	{"getIShellIcon", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getIShellIcon))},
	{"getIcon", "(Ljava/lang/String;Z)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($String*,bool)>(&Win32ShellFolder2::getIcon))},
	{"getIcon", "(Z)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getIcon", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getIconBits", "(J)[I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$ints*(*)(int64_t)>(&Win32ShellFolder2::getIconBits))},
	{"getIconIndex", "(JJ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&Win32ShellFolder2::getIconIndex))},
	{"getIconResource", "(Ljava/lang/String;III)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($String*,int32_t,int32_t,int32_t)>(&Win32ShellFolder2::getIconResource))},
	{"getLibraries", "()Ljava/util/List;", "()Ljava/util/List<Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&Win32ShellFolder2::getLibraries))},
	{"getLinkLocation", "(JJZ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,bool)>(&Win32ShellFolder2::getLinkLocation))},
	{"getLinkLocation", "()Lsun/awt/shell/ShellFolder;", nullptr, $PUBLIC},
	{"getLinkLocation", "(Z)Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE, $method(static_cast<Win32ShellFolder2*(Win32ShellFolder2::*)(bool)>(&Win32ShellFolder2::getLinkLocation))},
	{"getNextChild", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Win32ShellFolder2::*)(int64_t)>(&Win32ShellFolder2::getNextChild))},
	{"getNextPIDLEntry", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&Win32ShellFolder2::getNextPIDLEntry))},
	{"getParentFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getParentIShellFolder", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getParentIShellFolder))},
	{"getRelativePIDL", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(Win32ShellFolder2::*)()>(&Win32ShellFolder2::getRelativePIDL))},
	{"getShell32Icon", "(II)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)(int32_t,int32_t)>(&Win32ShellFolder2::getShell32Icon))},
	{"getStandardViewButton0", "(IZ)[I", nullptr, $STATIC | $NATIVE, $method(static_cast<$ints*(*)(int32_t,bool)>(&Win32ShellFolder2::getStandardViewButton0))},
	{"getSystemIcon", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&Win32ShellFolder2::getSystemIcon))},
	{"getSystemIcon", "(Lsun/awt/shell/Win32ShellFolder2$SystemIcon;)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($Win32ShellFolder2$SystemIcon*)>(&Win32ShellFolder2::getSystemIcon))},
	{"hasAttribute", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(Win32ShellFolder2::*)(int32_t)>(&Win32ShellFolder2::hasAttribute))},
	{"hiResIconAvailable", "(JJ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t)>(&Win32ShellFolder2::hiResIconAvailable))},
	{"initDesktop", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Win32ShellFolder2::*)()>(&Win32ShellFolder2::initDesktop))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Win32ShellFolder2::initIDs))},
	{"initSpecial", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Win32ShellFolder2::*)(int64_t,int32_t)>(&Win32ShellFolder2::initSpecial))},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isFileSystem", "()Z", nullptr, $PUBLIC},
	{"isHidden", "()Z", nullptr, $PUBLIC},
	{"isLibrary", "()Z", nullptr, 0, $method(static_cast<bool(Win32ShellFolder2::*)()>(&Win32ShellFolder2::isLibrary))},
	{"isLink", "()Z", nullptr, $PUBLIC},
	{"isNetworkRoot", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&Win32ShellFolder2::isNetworkRoot))},
	{"isSpecial", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Win32ShellFolder2::*)()>(&Win32ShellFolder2::isSpecial))},
	{"lambda$getIcon$0", "(I)Ljava/awt/Image;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Image*(Win32ShellFolder2::*)(int32_t)>(&Win32ShellFolder2::lambda$getIcon$0)), "java.lang.Exception"},
	{"listFiles", "(Z)[Ljava/io/File;", nullptr, $PUBLIC},
	{"loadKnownFolders", "()[Lsun/awt/shell/Win32ShellFolder2$KnownFolderDefinition;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Win32ShellFolder2$KnownFolderDefinitionArray*(*)()>(&Win32ShellFolder2::loadKnownFolders))},
	{"makeIcon", "(J)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)(int64_t)>(&Win32ShellFolder2::makeIcon))},
	{"parseDisplayName", "(Ljava/lang/String;)J", nullptr, 0, $method(static_cast<int64_t(Win32ShellFolder2::*)($String*)>(&Win32ShellFolder2::parseDisplayName)), "java.io.IOException,java.lang.InterruptedException"},
	{"parseDisplayName0", "(JLjava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,$String*)>(&Win32ShellFolder2::parseDisplayName0)), "java.io.IOException"},
	{"pathsEqual", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&Win32ShellFolder2::pathsEqual))},
	{"pidlsEqual", "(JJJ)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int64_t,int64_t,int64_t)>(&Win32ShellFolder2::pidlsEqual)), "java.lang.InterruptedException"},
	{"releaseEnumObjects", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Win32ShellFolder2::*)(int64_t)>(&Win32ShellFolder2::releaseEnumObjects))},
	{"releaseIShellFolder", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Win32ShellFolder2::releaseIShellFolder))},
	{"releasePIDL", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Win32ShellFolder2::releasePIDL))},
	{"resolveLibrary", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Win32ShellFolder2::resolveLibrary))},
	{"resolveLibrary", "()Lsun/awt/shell/ShellFolder;", nullptr, $PRIVATE, $method(static_cast<$ShellFolder*(Win32ShellFolder2::*)()>(&Win32ShellFolder2::resolveLibrary))},
	{"setIShellFolder", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Win32ShellFolder2::*)(int64_t)>(&Win32ShellFolder2::setIShellFolder))},
	{"setIsPersonal", "()V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolder2::*)()>(&Win32ShellFolder2::setIsPersonal))},
	{"setRelativePIDL", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(Win32ShellFolder2::*)(int64_t)>(&Win32ShellFolder2::setRelativePIDL))},
	{"sortChildren", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/io/File;>;)V", $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

#define _METHOD_INDEX_bindToObject 3
#define _METHOD_INDEX_combinePIDLs 4
#define _METHOD_INDEX_compareIDs 5
#define _METHOD_INDEX_compareIDsByColumn 6
#define _METHOD_INDEX_copyFirstPIDLEntry 10
#define _METHOD_INDEX_disposeIcon 13
#define _METHOD_INDEX_doGetColumnInfo 14
#define _METHOD_INDEX_doGetColumnValue 15
#define _METHOD_INDEX_extractIcon 17
#define _METHOD_INDEX_getAttributes0 19
#define _METHOD_INDEX_getDisplayNameOf 25
#define _METHOD_INDEX_getEnumObjects 27
#define _METHOD_INDEX_getExecutableType 28
#define _METHOD_INDEX_getFileSystemPath0 32
#define _METHOD_INDEX_getFolderType 35
#define _METHOD_INDEX_getIShellIcon 38
#define _METHOD_INDEX_getIcon 40
#define _METHOD_INDEX_getIconBits 43
#define _METHOD_INDEX_getIconIndex 44
#define _METHOD_INDEX_getIconResource 45
#define _METHOD_INDEX_getLinkLocation 47
#define _METHOD_INDEX_getNextChild 50
#define _METHOD_INDEX_getNextPIDLEntry 51
#define _METHOD_INDEX_getStandardViewButton0 56
#define _METHOD_INDEX_getSystemIcon 57
#define _METHOD_INDEX_hiResIconAvailable 60
#define _METHOD_INDEX_initDesktop 61
#define _METHOD_INDEX_initIDs 62
#define _METHOD_INDEX_initSpecial 63
#define _METHOD_INDEX_loadKnownFolders 73
#define _METHOD_INDEX_parseDisplayName0 76
#define _METHOD_INDEX_releaseEnumObjects 79
#define _METHOD_INDEX_releaseIShellFolder 80
#define _METHOD_INDEX_releasePIDL 81

$InnerClassInfo _Win32ShellFolder2_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$MultiResolutionIconImage", "sun.awt.shell.Win32ShellFolder2", "MultiResolutionIconImage", $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$ColumnComparator", "sun.awt.shell.Win32ShellFolder2", "ColumnComparator", $PRIVATE | $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$FolderDisposer", "sun.awt.shell.Win32ShellFolder2", "FolderDisposer", $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$KnownLibraries", "sun.awt.shell.Win32ShellFolder2", "KnownLibraries", $STATIC | $FINAL},
	{"sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition", "sun.awt.shell.Win32ShellFolder2", "KnownFolderDefinition", $STATIC | $FINAL},
	{"sun.awt.shell.Win32ShellFolder2$SystemIcon", "sun.awt.shell.Win32ShellFolder2", "SystemIcon", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.awt.shell.Win32ShellFolder2$19", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$18", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$17", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$16", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$15", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$14", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$13", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$12", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$11", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$10", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$9", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$8", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$7", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$6", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$5", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$4", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$3", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$2", nullptr, nullptr, 0},
	{"sun.awt.shell.Win32ShellFolder2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2",
	"sun.awt.shell.ShellFolder",
	nullptr,
	_Win32ShellFolder2_FieldInfo_,
	_Win32ShellFolder2_MethodInfo_,
	nullptr,
	nullptr,
	_Win32ShellFolder2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2$MultiResolutionIconImage,sun.awt.shell.Win32ShellFolder2$ColumnComparator,sun.awt.shell.Win32ShellFolder2$ColumnComparator$1,sun.awt.shell.Win32ShellFolder2$FolderDisposer,sun.awt.shell.Win32ShellFolder2$FolderDisposer$1,sun.awt.shell.Win32ShellFolder2$KnownLibraries,sun.awt.shell.Win32ShellFolder2$KnownFolderDefinition,sun.awt.shell.Win32ShellFolder2$SystemIcon,sun.awt.shell.Win32ShellFolder2$19,sun.awt.shell.Win32ShellFolder2$18,sun.awt.shell.Win32ShellFolder2$17,sun.awt.shell.Win32ShellFolder2$16,sun.awt.shell.Win32ShellFolder2$15,sun.awt.shell.Win32ShellFolder2$14,sun.awt.shell.Win32ShellFolder2$13,sun.awt.shell.Win32ShellFolder2$12,sun.awt.shell.Win32ShellFolder2$11,sun.awt.shell.Win32ShellFolder2$10,sun.awt.shell.Win32ShellFolder2$9,sun.awt.shell.Win32ShellFolder2$8,sun.awt.shell.Win32ShellFolder2$7,sun.awt.shell.Win32ShellFolder2$6,sun.awt.shell.Win32ShellFolder2$5,sun.awt.shell.Win32ShellFolder2$4,sun.awt.shell.Win32ShellFolder2$3,sun.awt.shell.Win32ShellFolder2$2,sun.awt.shell.Win32ShellFolder2$1"
};

$Object* allocate$Win32ShellFolder2($Class* clazz) {
	return $of($alloc(Win32ShellFolder2));
}

$ints* Win32ShellFolder2::ICON_RESOLUTIONS = nullptr;
$String* Win32ShellFolder2::FNAME = nullptr;
$String* Win32ShellFolder2::FSIZE = nullptr;
$String* Win32ShellFolder2::FTYPE = nullptr;
$String* Win32ShellFolder2::FDATE = nullptr;
$Map* Win32ShellFolder2::smallSystemImages = nullptr;
$Map* Win32ShellFolder2::largeSystemImages = nullptr;
$Map* Win32ShellFolder2::smallLinkedSystemImages = nullptr;
$Map* Win32ShellFolder2::largeLinkedSystemImages = nullptr;

$Image* Win32ShellFolder2::access$001(Win32ShellFolder2* x0, bool x1) {
	$init(Win32ShellFolder2);
	return $nc(x0)->$ShellFolder::getIcon(x1);
}

void Win32ShellFolder2::initIDs() {
	$init(Win32ShellFolder2);
	$prepareNativeStatic(Win32ShellFolder2, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Win32ShellFolder2::setIShellFolder(int64_t pIShellFolder) {
	$nc(this->disposer)->pIShellFolder = pIShellFolder;
}

void Win32ShellFolder2::setRelativePIDL(int64_t relativePIDL) {
	$nc(this->disposer)->relativePIDL = relativePIDL;
}

$String* Win32ShellFolder2::composePathForCsidl(int32_t csidl) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	$var($String, path, getFileSystemPath(csidl));
	return path == nullptr ? ($str({"ShellFolder: 0x"_s, $($Integer::toHexString(csidl))})) : path;
}

void Win32ShellFolder2::init$(int32_t csidl) {
	$useLocalCurrentObjectStackCache();
	$ShellFolder::init$(nullptr, $(composePathForCsidl(csidl)));
	$set(this, disposerReferent, $new($Object));
	$set(this, disposer, $new($Win32ShellFolder2$FolderDisposer));
	this->pIShellIcon = -1;
	$set(this, folderType, nullptr);
	$set(this, displayName, nullptr);
	$set(this, smallIcon, nullptr);
	$set(this, largeIcon, nullptr);
	$set(this, isDir, nullptr);
	this->isLib = false;
	$load($InterruptedException);
	invoke($$new($Win32ShellFolder2$1, this, csidl), $InterruptedException::class$);
	$Disposer::addObjectRecord(this->disposerReferent, this->disposer);
}

void Win32ShellFolder2::init$(Win32ShellFolder2* parent, int64_t pIShellFolder, int64_t relativePIDL, $String* path, bool isLib) {
	$ShellFolder::init$(parent, (path != nullptr) ? path : "ShellFolder: "_s);
	$set(this, disposerReferent, $new($Object));
	$set(this, disposer, $new($Win32ShellFolder2$FolderDisposer));
	this->pIShellIcon = -1;
	$set(this, folderType, nullptr);
	$set(this, displayName, nullptr);
	$set(this, smallIcon, nullptr);
	$set(this, largeIcon, nullptr);
	$set(this, isDir, nullptr);
	this->isLib = isLib;
	$nc(this->disposer)->pIShellFolder = pIShellFolder;
	$nc(this->disposer)->relativePIDL = relativePIDL;
	$Disposer::addObjectRecord(this->disposerReferent, this->disposer);
}

Win32ShellFolder2* Win32ShellFolder2::createShellFolder(Win32ShellFolder2* parent, int64_t pIDL) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	$load($RuntimeException);
	$var($String, path, $cast($String, invoke($$new($Win32ShellFolder2$2, parent, pIDL), $RuntimeException::class$)));
	$var($String, libPath, resolveLibrary(path));
	if (libPath == nullptr) {
		return $new(Win32ShellFolder2, parent, 0, pIDL, path, false);
	} else {
		return $new(Win32ShellFolder2, parent, 0, pIDL, libPath, true);
	}
}

void Win32ShellFolder2::initDesktop() {
	$prepareNative(Win32ShellFolder2, initDesktop, void);
	$invokeNative();
	$finishNative();
}

void Win32ShellFolder2::initSpecial(int64_t desktopIShellFolder, int32_t csidl) {
	$prepareNative(Win32ShellFolder2, initSpecial, void, int64_t desktopIShellFolder, int32_t csidl);
	$invokeNative(desktopIShellFolder, csidl);
	$finishNative();
}

void Win32ShellFolder2::setIsPersonal() {
	this->isPersonal = true;
}

$Object* Win32ShellFolder2::writeReplace() {
	return $of(invoke($$new($Win32ShellFolder2$3, this)));
}

void Win32ShellFolder2::dispose() {
	$nc(this->disposer)->dispose();
}

int64_t Win32ShellFolder2::getNextPIDLEntry(int64_t pIDL) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getNextPIDLEntry, int64_t, int64_t pIDL);
	$ret = $invokeNativeStatic(pIDL);
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::copyFirstPIDLEntry(int64_t pIDL) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, copyFirstPIDLEntry, int64_t, int64_t pIDL);
	$ret = $invokeNativeStatic(pIDL);
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::combinePIDLs(int64_t ppIDL, int64_t pIDL) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, combinePIDLs, int64_t, int64_t ppIDL, int64_t pIDL);
	$ret = $invokeNativeStatic(ppIDL, pIDL);
	$finishNativeStatic();
	return $ret;
}

void Win32ShellFolder2::releasePIDL(int64_t pIDL) {
	$init(Win32ShellFolder2);
	$prepareNativeStatic(Win32ShellFolder2, releasePIDL, void, int64_t pIDL);
	$invokeNativeStatic(pIDL);
	$finishNativeStatic();
}

void Win32ShellFolder2::releaseIShellFolder(int64_t pIShellFolder) {
	$init(Win32ShellFolder2);
	$prepareNativeStatic(Win32ShellFolder2, releaseIShellFolder, void, int64_t pIShellFolder);
	$invokeNativeStatic(pIShellFolder);
	$finishNativeStatic();
}

int64_t Win32ShellFolder2::getIShellFolder() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->disposer)->pIShellFolder == 0) {
		try {
			$load($RuntimeException);
			$nc(this->disposer)->pIShellFolder = $nc(($cast($Long, $(invoke($$new($Win32ShellFolder2$4, this), $RuntimeException::class$)))))->longValue();
		} catch ($InterruptedException& e) {
		}
	}
	return $nc(this->disposer)->pIShellFolder;
}

int64_t Win32ShellFolder2::getParentIShellFolder() {
	$var(Win32ShellFolder2, parent, $cast(Win32ShellFolder2, getParentFile()));
	if (parent == nullptr) {
		return getIShellFolder();
	}
	return $nc(parent)->getIShellFolder();
}

int64_t Win32ShellFolder2::getRelativePIDL() {
	if ($nc(this->disposer)->relativePIDL == 0) {
		$throwNew($InternalError, "Should always have a relative PIDL"_s);
	}
	return $nc(this->disposer)->relativePIDL;
}

int64_t Win32ShellFolder2::getAbsolutePIDL() {
	if (this->parent == nullptr) {
		return getRelativePIDL();
	} else {
		if ($nc(this->disposer)->absolutePIDL == 0) {
			int64_t var$0 = $nc(($cast(Win32ShellFolder2, this->parent)))->getAbsolutePIDL();
			$nc(this->disposer)->absolutePIDL = combinePIDLs(var$0, getRelativePIDL());
		}
		return $nc(this->disposer)->absolutePIDL;
	}
}

Win32ShellFolder2* Win32ShellFolder2::getDesktop() {
	return $Win32ShellFolderManager2::getDesktop();
}

int64_t Win32ShellFolder2::getDesktopIShellFolder() {
	return $nc($(getDesktop()))->getIShellFolder();
}

bool Win32ShellFolder2::pathsEqual($String* path1, $String* path2) {
	$init(Win32ShellFolder2);
	return $nc(path1)->equalsIgnoreCase(path2);
}

bool Win32ShellFolder2::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr || !($instanceOf(Win32ShellFolder2, o))) {
		if (!($instanceOf($File, o))) {
			return $ShellFolder::equals(o);
		}
		$var($String, var$0, getPath());
		return pathsEqual(var$0, $($nc(($cast($File, o)))->getPath()));
	}
	$var(Win32ShellFolder2, rhs, $cast(Win32ShellFolder2, o));
	if ((this->parent == nullptr && $nc(rhs)->parent != nullptr) || (this->parent != nullptr && $nc(rhs)->parent == nullptr)) {
		return false;
	}
	bool var$1 = isFileSystem();
	if (var$1 && $nc(rhs)->isFileSystem()) {
		$var($String, var$3, getPath());
		bool var$2 = pathsEqual(var$3, $(rhs->getPath()));
		return (var$2 && (this->parent == rhs->parent || $nc(this->parent)->equals(rhs->parent)));
	}
	if (this->parent == $nc(rhs)->parent || $nc(this->parent)->equals($nc(rhs)->parent)) {
		try {
			return pidlsEqual(getParentIShellFolder(), $nc(this->disposer)->relativePIDL, $nc($nc(rhs)->disposer)->relativePIDL);
		} catch ($InterruptedException& e) {
			return false;
		}
	}
	return false;
}

bool Win32ShellFolder2::pidlsEqual(int64_t pIShellFolder, int64_t pidl1, int64_t pidl2) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	$load($RuntimeException);
	return $nc(($cast($Boolean, $(invoke($$new($Win32ShellFolder2$5, pIShellFolder, pidl1, pidl2), $RuntimeException::class$)))))->booleanValue();
}

int32_t Win32ShellFolder2::compareIDs(int64_t pParentIShellFolder, int64_t pidl1, int64_t pidl2) {
	$init(Win32ShellFolder2);
	int32_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, compareIDs, int32_t, int64_t pParentIShellFolder, int64_t pidl1, int64_t pidl2);
	$ret = $invokeNativeStatic(pParentIShellFolder, pidl1, pidl2);
	$finishNativeStatic();
	return $ret;
}

bool Win32ShellFolder2::isFileSystem() {
	if (this->cachedIsFileSystem == nullptr) {
		$set(this, cachedIsFileSystem, $Boolean::valueOf(hasAttribute(Win32ShellFolder2::ATTRIB_FILESYSTEM)));
	}
	return $nc(this->cachedIsFileSystem)->booleanValue();
}

bool Win32ShellFolder2::hasAttribute(int32_t attribute) {
	$useLocalCurrentObjectStackCache();
	$var($Boolean, result, $cast($Boolean, invoke($$new($Win32ShellFolder2$6, this, attribute))));
	return result != nullptr && result->booleanValue();
}

int32_t Win32ShellFolder2::getAttributes0(int64_t pParentIShellFolder, int64_t pIDL, int32_t attrsMask) {
	$init(Win32ShellFolder2);
	int32_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getAttributes0, int32_t, int64_t pParentIShellFolder, int64_t pIDL, int32_t attrsMask);
	$ret = $invokeNativeStatic(pParentIShellFolder, pIDL, attrsMask);
	$finishNativeStatic();
	return $ret;
}

$String* Win32ShellFolder2::getFileSystemPath(int64_t parentIShellFolder, int64_t relativePIDL) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	int32_t linkedFolder = Win32ShellFolder2::ATTRIB_LINK | Win32ShellFolder2::ATTRIB_FOLDER;
	bool var$0 = parentIShellFolder == $nc($($Win32ShellFolderManager2::getNetwork()))->getIShellFolder();
	if (var$0 && getAttributes0(parentIShellFolder, relativePIDL, linkedFolder) == linkedFolder) {
		int64_t var$1 = $nc($($Win32ShellFolderManager2::getDesktop()))->getIShellFolder();
		$var($String, s, getFileSystemPath(var$1, getLinkLocation(parentIShellFolder, relativePIDL, false)));
		if (s != nullptr && s->startsWith("\\\\"_s)) {
			return s;
		}
	}
	$var($String, path, getDisplayNameOf(parentIShellFolder, relativePIDL, Win32ShellFolder2::SHGDN_FORPARSING));
	return path;
}

$String* Win32ShellFolder2::resolveLibrary($String* path) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	bool var$0 = path != nullptr && path->startsWith("::{"_s);
	if (var$0 && $(path->toLowerCase())->endsWith(".library-ms"_s)) {
		{
			$init($Win32ShellFolder2$KnownLibraries);
			$var($Iterator, i$, $nc($Win32ShellFolder2$KnownLibraries::INSTANCE)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Win32ShellFolder2$KnownFolderDefinition, kf, $cast($Win32ShellFolder2$KnownFolderDefinition, i$->next()));
				{
					bool var$1 = $(path->toLowerCase())->endsWith($$str({"\\"_s, $($nc($nc(kf)->relativePath)->toLowerCase())}));
					if (var$1 && $(path->toUpperCase())->startsWith($($($nc($nc(kf)->parsingName)->substring(0, 40))->toUpperCase()))) {
						return $nc(kf)->saveLocation;
					}
				}
			}
		}
	}
	return nullptr;
}

$String* Win32ShellFolder2::getFileSystemPath(int32_t csidl) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	$load($IOException);
	$var($String, path, $cast($String, invoke($$new($Win32ShellFolder2$7, csidl), $IOException::class$)));
	if (path != nullptr) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkRead(path);
		}
	}
	return path;
}

$String* Win32ShellFolder2::getFileSystemPath0(int32_t csidl) {
	$init(Win32ShellFolder2);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(Win32ShellFolder2, getFileSystemPath0, $String*, int32_t csidl);
	$assign($ret, $invokeNativeStaticObject(csidl));
	$finishNativeStatic();
	return $ret;
}

bool Win32ShellFolder2::isNetworkRoot($String* path) {
	$init(Win32ShellFolder2);
	bool var$2 = $nc(path)->equals("\\\\"_s);
	bool var$1 = var$2 || $nc(path)->equals("\\"_s);
	bool var$0 = var$1 || $nc(path)->equals("//"_s);
	return (var$0 || $nc(path)->equals("/"_s));
}

$File* Win32ShellFolder2::getParentFile() {
	return this->parent;
}

bool Win32ShellFolder2::isDirectory() {
	if (this->isDir == nullptr) {
		bool var$0 = hasAttribute(Win32ShellFolder2::ATTRIB_FOLDER);
		if (var$0 && !hasAttribute(Win32ShellFolder2::ATTRIB_BROWSABLE)) {
			$init($Boolean);
			$set(this, isDir, $Boolean::TRUE);
		} else if (isLink()) {
			$var($ShellFolder, linkLocation, getLinkLocation(false));
			$set(this, isDir, $Boolean::valueOf(linkLocation != nullptr && linkLocation->isDirectory()));
		} else {
			$init($Boolean);
			$set(this, isDir, $Boolean::FALSE);
		}
	}
	return $nc(this->isDir)->booleanValue();
}

int64_t Win32ShellFolder2::getEnumObjects(bool includeHiddenFiles) {
	$useLocalCurrentObjectStackCache();
	$load($RuntimeException);
	return $nc(($cast($Long, $(invoke($$new($Win32ShellFolder2$8, this, includeHiddenFiles), $RuntimeException::class$)))))->longValue();
}

int64_t Win32ShellFolder2::getEnumObjects(int64_t pIShellFolder, bool isDesktop, bool includeHiddenFiles) {
	int64_t $ret = 0;
	$prepareNative(Win32ShellFolder2, getEnumObjects, int64_t, int64_t pIShellFolder, bool isDesktop, bool includeHiddenFiles);
	$ret = $invokeNative(pIShellFolder, isDesktop, includeHiddenFiles);
	$finishNative();
	return $ret;
}

int64_t Win32ShellFolder2::getNextChild(int64_t pEnumObjects) {
	int64_t $ret = 0;
	$prepareNative(Win32ShellFolder2, getNextChild, int64_t, int64_t pEnumObjects);
	$ret = $invokeNative(pEnumObjects);
	$finishNative();
	return $ret;
}

void Win32ShellFolder2::releaseEnumObjects(int64_t pEnumObjects) {
	$prepareNative(Win32ShellFolder2, releaseEnumObjects, void, int64_t pEnumObjects);
	$invokeNative(pEnumObjects);
	$finishNative();
}

int64_t Win32ShellFolder2::bindToObject(int64_t parentIShellFolder, int64_t pIDL) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, bindToObject, int64_t, int64_t parentIShellFolder, int64_t pIDL);
	$ret = $invokeNativeStatic(parentIShellFolder, pIDL);
	$finishNativeStatic();
	return $ret;
}

$FileArray* Win32ShellFolder2::listFiles(bool includeHiddenFiles) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead($(getPath()));
	}
	try {
		$load($InterruptedException);
		$var($FileArray, files, $cast($FileArray, invoke($$new($Win32ShellFolder2$9, this, includeHiddenFiles), $InterruptedException::class$)));
		return $Win32ShellFolderManager2::checkFiles(files);
	} catch ($InterruptedException& e) {
		return $new($FileArray, 0);
	}
	$shouldNotReachHere();
}

Win32ShellFolder2* Win32ShellFolder2::getChildByPath($String* filePath) {
	$load($InterruptedException);
	return $cast(Win32ShellFolder2, invoke($$new($Win32ShellFolder2$10, this, filePath), $InterruptedException::class$));
}

bool Win32ShellFolder2::isLink() {
	if (this->cachedIsLink == nullptr) {
		$set(this, cachedIsLink, $Boolean::valueOf(hasAttribute(Win32ShellFolder2::ATTRIB_LINK)));
	}
	return $nc(this->cachedIsLink)->booleanValue();
}

bool Win32ShellFolder2::isHidden() {
	return hasAttribute(Win32ShellFolder2::ATTRIB_HIDDEN);
}

int64_t Win32ShellFolder2::getLinkLocation(int64_t parentIShellFolder, int64_t relativePIDL, bool resolve) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getLinkLocation, int64_t, int64_t parentIShellFolder, int64_t relativePIDL, bool resolve);
	$ret = $invokeNativeStatic(parentIShellFolder, relativePIDL, resolve);
	$finishNativeStatic();
	return $ret;
}

$ShellFolder* Win32ShellFolder2::getLinkLocation() {
	return getLinkLocation(true);
}

Win32ShellFolder2* Win32ShellFolder2::getLinkLocation(bool resolve) {
	return $cast(Win32ShellFolder2, invoke($$new($Win32ShellFolder2$11, this, resolve)));
}

int64_t Win32ShellFolder2::parseDisplayName($String* name) {
	$useLocalCurrentObjectStackCache();
	$load($IOException);
	return $nc(($cast($Long, $(invoke($$new($Win32ShellFolder2$12, this, name), $IOException::class$)))))->longValue();
}

int64_t Win32ShellFolder2::parseDisplayName0(int64_t pIShellFolder, $String* name) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, parseDisplayName0, int64_t, int64_t pIShellFolder, $String* name);
	$ret = $invokeNativeStatic(pIShellFolder, name);
	$finishNativeStatic();
	return $ret;
}

$String* Win32ShellFolder2::getDisplayNameOf(int64_t parentIShellFolder, int64_t relativePIDL, int32_t attrs) {
	$init(Win32ShellFolder2);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(Win32ShellFolder2, getDisplayNameOf, $String*, int64_t parentIShellFolder, int64_t relativePIDL, int32_t attrs);
	$assign($ret, $invokeNativeStaticObject(parentIShellFolder, relativePIDL, attrs));
	$finishNativeStatic();
	return $ret;
}

$Win32ShellFolder2$KnownFolderDefinitionArray* Win32ShellFolder2::loadKnownFolders() {
	$init(Win32ShellFolder2);
	$var($Win32ShellFolder2$KnownFolderDefinitionArray, $ret, nullptr);
	$prepareNativeStatic(Win32ShellFolder2, loadKnownFolders, $Win32ShellFolder2$KnownFolderDefinitionArray*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$String* Win32ShellFolder2::getDisplayName() {
	if (this->displayName == nullptr) {
		$set(this, displayName, $cast($String, invoke($$new($Win32ShellFolder2$13, this))));
	}
	return this->displayName;
}

$String* Win32ShellFolder2::getFolderType(int64_t pIDL) {
	$init(Win32ShellFolder2);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(Win32ShellFolder2, getFolderType, $String*, int64_t pIDL);
	$assign($ret, $invokeNativeStaticObject(pIDL));
	$finishNativeStatic();
	return $ret;
}

$String* Win32ShellFolder2::getFolderType() {
	if (this->folderType == nullptr) {
		int64_t absolutePIDL = getAbsolutePIDL();
		$set(this, folderType, $cast($String, invoke($$new($Win32ShellFolder2$14, this, absolutePIDL))));
	}
	return this->folderType;
}

$String* Win32ShellFolder2::getExecutableType($String* path) {
	$var($String, $ret, nullptr);
	$prepareNative(Win32ShellFolder2, getExecutableType, $String*, $String* path);
	$assign($ret, $invokeNativeObject(path));
	$finishNative();
	return $ret;
}

$String* Win32ShellFolder2::getExecutableType() {
	if (!isFileSystem()) {
		return nullptr;
	}
	return getExecutableType($(getAbsolutePath()));
}

int64_t Win32ShellFolder2::getIShellIcon(int64_t pIShellFolder) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getIShellIcon, int64_t, int64_t pIShellFolder);
	$ret = $invokeNativeStatic(pIShellFolder);
	$finishNativeStatic();
	return $ret;
}

int32_t Win32ShellFolder2::getIconIndex(int64_t parentIShellIcon, int64_t relativePIDL) {
	$init(Win32ShellFolder2);
	int32_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getIconIndex, int32_t, int64_t parentIShellIcon, int64_t relativePIDL);
	$ret = $invokeNativeStatic(parentIShellIcon, relativePIDL);
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::getIcon($String* absolutePath, bool getLargeIcon) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getIcon, int64_t, $String* absolutePath, bool getLargeIcon);
	$ret = $invokeNativeStatic(absolutePath, getLargeIcon);
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::extractIcon(int64_t parentIShellFolder, int64_t relativePIDL, int32_t size, bool getDefaultIcon) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, extractIcon, int64_t, int64_t parentIShellFolder, int64_t relativePIDL, int32_t size, bool getDefaultIcon);
	$ret = $invokeNativeStatic(parentIShellFolder, relativePIDL, size, getDefaultIcon);
	$finishNativeStatic();
	return $ret;
}

bool Win32ShellFolder2::hiResIconAvailable(int64_t parentIShellFolder, int64_t relativePIDL) {
	$init(Win32ShellFolder2);
	bool $ret = false;
	$prepareNativeStatic(Win32ShellFolder2, hiResIconAvailable, bool, int64_t parentIShellFolder, int64_t relativePIDL);
	$ret = $invokeNativeStatic(parentIShellFolder, relativePIDL);
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::getSystemIcon(int32_t iconID) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getSystemIcon, int64_t, int32_t iconID);
	$ret = $invokeNativeStatic(iconID);
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::getIconResource($String* libName, int32_t iconID, int32_t cxDesired, int32_t cyDesired) {
	$init(Win32ShellFolder2);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, getIconResource, int64_t, $String* libName, int32_t iconID, int32_t cxDesired, int32_t cyDesired);
	$ret = $invokeNativeStatic(libName, iconID, cxDesired, cyDesired);
	$finishNativeStatic();
	return $ret;
}

$ints* Win32ShellFolder2::getIconBits(int64_t hIcon) {
	$init(Win32ShellFolder2);
	$var($ints, $ret, nullptr);
	$prepareNativeStatic(Win32ShellFolder2, getIconBits, $ints*, int64_t hIcon);
	$assign($ret, $invokeNativeStaticObject(hIcon));
	$finishNativeStatic();
	return $ret;
}

void Win32ShellFolder2::disposeIcon(int64_t hIcon) {
	$init(Win32ShellFolder2);
	$prepareNativeStatic(Win32ShellFolder2, disposeIcon, void, int64_t hIcon);
	$invokeNativeStatic(hIcon);
	$finishNativeStatic();
}

$ints* Win32ShellFolder2::getStandardViewButton0(int32_t iconIndex, bool small) {
	$init(Win32ShellFolder2);
	$var($ints, $ret, nullptr);
	$prepareNativeStatic(Win32ShellFolder2, getStandardViewButton0, $ints*, int32_t iconIndex, bool small);
	$assign($ret, $invokeNativeStaticObject(iconIndex, small));
	$finishNativeStatic();
	return $ret;
}

int64_t Win32ShellFolder2::getIShellIcon() {
	if (this->pIShellIcon == (int64_t)-1) {
		this->pIShellIcon = getIShellIcon(getIShellFolder());
	}
	return this->pIShellIcon;
}

$Image* Win32ShellFolder2::makeIcon(int64_t hIcon) {
	$init(Win32ShellFolder2);
	$useLocalCurrentObjectStackCache();
	if (hIcon != (int64_t)0 && hIcon != (int64_t)-1) {
		$var($ints, iconBits, getIconBits(hIcon));
		if (iconBits != nullptr) {
			int32_t iconSize = $cast(int32_t, $Math::sqrt((double)iconBits->length));
			$var($BufferedImage, img, $new($BufferedImage, iconSize, iconSize, $BufferedImage::TYPE_INT_ARGB));
			img->setRGB(0, 0, iconSize, iconSize, iconBits, 0, iconSize);
			return img;
		}
	}
	return nullptr;
}

$Image* Win32ShellFolder2::getIcon(bool getLargeIcon) {
	$useLocalCurrentObjectStackCache();
	$var($Image, icon, getLargeIcon ? this->largeIcon : this->smallIcon);
	int32_t size = getLargeIcon ? Win32ShellFolder2::LARGE_ICON_SIZE : Win32ShellFolder2::SMALL_ICON_SIZE;
	if (icon == nullptr) {
		$assign(icon, $cast($Image, invoke($$new($Win32ShellFolder2$15, this, getLargeIcon))));
	}
	return icon;
}

$Image* Win32ShellFolder2::getIcon(int32_t width, int32_t height) {
	int32_t size = $Math::max(width, height);
	return $cast($Image, invoke(static_cast<$Callable*>($$new(Win32ShellFolder2$$Lambda$lambda$getIcon$0, this, size))));
}

$Image* Win32ShellFolder2::getSystemIcon($Win32ShellFolder2$SystemIcon* iconType) {
	$init(Win32ShellFolder2);
	int64_t hIcon = getSystemIcon($nc(iconType)->getIconID());
	$var($Image, icon, makeIcon(hIcon));
	if (Win32ShellFolder2::LARGE_ICON_SIZE != $nc(icon)->getWidth(nullptr)) {
		$assign(icon, $new($Win32ShellFolder2$MultiResolutionIconImage, Win32ShellFolder2::LARGE_ICON_SIZE, icon));
	}
	disposeIcon(hIcon);
	return icon;
}

$Image* Win32ShellFolder2::getShell32Icon(int32_t iconID, int32_t size) {
	$init(Win32ShellFolder2);
	int64_t hIcon = getIconResource("shell32.dll"_s, iconID, size, size);
	if (hIcon != 0) {
		$var($Image, icon, makeIcon(hIcon));
		if (size != $nc(icon)->getWidth(nullptr)) {
			$assign(icon, $new($Win32ShellFolder2$MultiResolutionIconImage, size, icon));
		}
		disposeIcon(hIcon);
		return icon;
	}
	return nullptr;
}

$File* Win32ShellFolder2::getCanonicalFile() {
	return this;
}

bool Win32ShellFolder2::isSpecial() {
	bool var$0 = this->isPersonal || !isFileSystem();
	return var$0 || (this == getDesktop());
}

int32_t Win32ShellFolder2::compareTo($File* file2) {
	if (!($instanceOf(Win32ShellFolder2, file2))) {
		bool var$0 = isFileSystem();
		if (var$0 && !isSpecial()) {
			return $ShellFolder::compareTo(file2);
		} else {
			return -1;
		}
	}
	return $Win32ShellFolderManager2::compareShellFolders(this, $cast(Win32ShellFolder2, file2));
}

$ShellFolderColumnInfoArray* Win32ShellFolder2::getFolderColumns() {
	$useLocalCurrentObjectStackCache();
	$var($ShellFolder, library, resolveLibrary());
	if (library != nullptr) {
		return library->getFolderColumns();
	}
	return $cast($ShellFolderColumnInfoArray, invoke($$new($Win32ShellFolder2$16, this)));
}

$Object* Win32ShellFolder2::getFolderColumnValue(int32_t column) {
	$useLocalCurrentObjectStackCache();
	if (!isLibrary()) {
		$var($ShellFolder, library, resolveLibrary());
		if (library != nullptr) {
			return $of(library->getFolderColumnValue(column));
		}
	}
	return $of(invoke($$new($Win32ShellFolder2$17, this, column)));
}

bool Win32ShellFolder2::isLibrary() {
	return this->isLib;
}

$ShellFolder* Win32ShellFolder2::resolveLibrary() {
	$useLocalCurrentObjectStackCache();
	{
		$var($ShellFolder, f, this);
		for (; f != nullptr; $assign(f, f->parent)) {
			if (!$nc(f)->isFileSystem()) {
				if ($instanceOf(Win32ShellFolder2, f) && $nc(($cast(Win32ShellFolder2, f)))->isLibrary()) {
					try {
						return getShellFolder($$new($File, $(getPath())));
					} catch ($FileNotFoundException& e) {
					}
				}
				break;
			}
		}
	}
	return nullptr;
}

$ShellFolderColumnInfoArray* Win32ShellFolder2::doGetColumnInfo(int64_t iShellFolder2) {
	$var($ShellFolderColumnInfoArray, $ret, nullptr);
	$prepareNative(Win32ShellFolder2, doGetColumnInfo, $ShellFolderColumnInfoArray*, int64_t iShellFolder2);
	$assign($ret, $invokeNativeObject(iShellFolder2));
	$finishNative();
	return $ret;
}

$Object* Win32ShellFolder2::doGetColumnValue(int64_t parentIShellFolder2, int64_t childPIDL, int32_t columnIdx) {
	$var($Object, $ret, nullptr);
	$prepareNative(Win32ShellFolder2, doGetColumnValue, $Object*, int64_t parentIShellFolder2, int64_t childPIDL, int32_t columnIdx);
	$assign($ret, $invokeNativeObject(parentIShellFolder2, childPIDL, columnIdx));
	$finishNative();
	return $ret;
}

int32_t Win32ShellFolder2::compareIDsByColumn(int64_t pParentIShellFolder, int64_t pidl1, int64_t pidl2, int32_t columnIdx) {
	$init(Win32ShellFolder2);
	int32_t $ret = 0;
	$prepareNativeStatic(Win32ShellFolder2, compareIDsByColumn, int32_t, int64_t pParentIShellFolder, int64_t pidl1, int64_t pidl2, int32_t columnIdx);
	$ret = $invokeNativeStatic(pParentIShellFolder, pidl1, pidl2, columnIdx);
	$finishNativeStatic();
	return $ret;
}

void Win32ShellFolder2::sortChildren($List* files) {
	invoke($$new($Win32ShellFolder2$18, this, files));
}

$List* Win32ShellFolder2::getLibraries() {
	$init(Win32ShellFolder2);
	return $cast($List, invoke($$new($Win32ShellFolder2$19)));
}

int32_t Win32ShellFolder2::compareTo(Object$* file2) {
	return this->compareTo($cast($File, file2));
}

$Image* Win32ShellFolder2::lambda$getIcon$0(int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($Image, newIcon, nullptr);
	if (isLink()) {
		$var(Win32ShellFolder2, folder, getLinkLocation(false));
		if (folder != nullptr && folder->isLibrary()) {
			return folder->getIcon(size, size);
		}
	}
	$var($Map, multiResolutionIcon, $new($HashMap));
	int32_t start = size > Win32ShellFolder2::MAX_QUALITY_ICON ? $nc(Win32ShellFolder2::ICON_RESOLUTIONS)->length - 1 : 0;
	int32_t increment = size > Win32ShellFolder2::MAX_QUALITY_ICON ? -1 : 1;
	int32_t end = size > Win32ShellFolder2::MAX_QUALITY_ICON ? -1 : $nc(Win32ShellFolder2::ICON_RESOLUTIONS)->length;
	for (int32_t i = start; i != end; i += increment) {
		int32_t s = $nc(Win32ShellFolder2::ICON_RESOLUTIONS)->get(i);
		if (size < Win32ShellFolder2::MIN_QUALITY_ICON || size > Win32ShellFolder2::MAX_QUALITY_ICON || (s >= size && s <= size * 2)) {
			int64_t var$0 = getParentIShellFolder();
			int64_t hIcon = extractIcon(var$0, getRelativePIDL(), s, false);
			if (hIcon <= 0) {
				int64_t var$1 = getParentIShellFolder();
				hIcon = extractIcon(var$1, getRelativePIDL(), s, true);
				if (hIcon <= 0) {
					if (isDirectory()) {
						return getShell32Icon(Win32ShellFolder2::FOLDER_ICON_ID, size);
					} else {
						return getShell32Icon(Win32ShellFolder2::FILE_ICON_ID, size);
					}
				}
			}
			$assign(newIcon, makeIcon(hIcon));
			disposeIcon(hIcon);
			multiResolutionIcon->put($($Integer::valueOf(s)), newIcon);
			if (size < Win32ShellFolder2::MIN_QUALITY_ICON || size > Win32ShellFolder2::MAX_QUALITY_ICON) {
				break;
			}
		}
	}
	return $new($Win32ShellFolder2$MultiResolutionIconImage, size, multiResolutionIcon);
}

void clinit$Win32ShellFolder2($Class* class$) {
	$init($ShellFolder);
	$assignStatic(Win32ShellFolder2::FNAME, $ShellFolder::COLUMN_NAME);
	$assignStatic(Win32ShellFolder2::FSIZE, $ShellFolder::COLUMN_SIZE);
	$assignStatic(Win32ShellFolder2::FTYPE, "FileChooser.fileTypeHeaderText"_s);
	$assignStatic(Win32ShellFolder2::FDATE, $ShellFolder::COLUMN_DATE);
	$assignStatic(Win32ShellFolder2::ICON_RESOLUTIONS, $new($ints, {
		16,
		24,
		32,
		48,
		64,
		72,
		96,
		128,
		256
	}));
	{
		Win32ShellFolder2::initIDs();
	}
	$assignStatic(Win32ShellFolder2::smallSystemImages, $new($HashMap));
	$assignStatic(Win32ShellFolder2::largeSystemImages, $new($HashMap));
	$assignStatic(Win32ShellFolder2::smallLinkedSystemImages, $new($HashMap));
	$assignStatic(Win32ShellFolder2::largeLinkedSystemImages, $new($HashMap));
}

Win32ShellFolder2::Win32ShellFolder2() {
}

$Class* Win32ShellFolder2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Win32ShellFolder2$$Lambda$lambda$getIcon$0::classInfo$.name)) {
			return Win32ShellFolder2$$Lambda$lambda$getIcon$0::load$(name, initialize);
		}
	}
	$loadClass(Win32ShellFolder2, name, initialize, &_Win32ShellFolder2_ClassInfo_, clinit$Win32ShellFolder2, allocate$Win32ShellFolder2);
	return class$;
}

$Class* Win32ShellFolder2::class$ = nullptr;

		} // shell
	} // awt
} // sun