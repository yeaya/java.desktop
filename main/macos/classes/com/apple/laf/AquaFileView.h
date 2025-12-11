#ifndef _com_apple_laf_AquaFileView_h_
#define _com_apple_laf_AquaFileView_h_
//$ class com.apple.laf.AquaFileView
//$ extends javax.swing.filechooser.FileView

#include <java/lang/Array.h>
#include <javax/swing/filechooser/FileView.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("MAX_CACHED_ENTRIES")
#undef MAX_CACHED_ENTRIES
#pragma push_macro("UNINITALIZED_LS_INFO")
#undef UNINITALIZED_LS_INFO

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
			class AquaFileView$FileInfo;
			class AquaUtils$RecyclableSingleton;
		}
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
		class LinkedList;
		class Map;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileView : public ::javax::swing::filechooser::FileView {
	$class(AquaFileView, 0, ::javax::swing::filechooser::FileView)
public:
	AquaFileView();
	void init$(::com::apple::laf::AquaFileChooserUI* fileChooserUI);
	virtual bool _applicationIsTraversable();
	virtual $String* _directoryDescriptionText();
	virtual $String* _fileDescriptionText();
	virtual bool _packageIsTraversable();
	virtual $String* getDescription(::java::io::File* f) override;
	virtual ::com::apple::laf::AquaFileView$FileInfo* getFileInfoFor(::java::io::File* file);
	virtual ::javax::swing::Icon* getIcon(::java::io::File* f) override;
	virtual int32_t getLSInfoFor(::java::io::File* f);
	static $String* getMachineName();
	virtual $String* getName(::java::io::File* f) override;
	static $String* getNativeDisplayName($bytes* pathBytes, bool isDirectory);
	static int32_t getNativeLSInfo($bytes* pathBytes, bool isDirectory);
	static $String* getNativeMachineName();
	static $String* getNativePathForResolvedAlias($bytes* absolutePath, bool isDirectory);
	static $String* getNativePathToSharedJDKBundle();
	static ::java::util::LinkedList* getPathComponents(::java::io::File* mFile);
	static $String* getPathToRunningJDKBundle();
	static $String* getPathToSharedJDKBundle();
	virtual $String* getTypeDescription(::java::io::File* f) override;
	virtual bool isAlias(::java::io::File* f);
	virtual bool isApplication(::java::io::File* f);
	virtual bool isPackage(::java::io::File* f);
	virtual ::java::lang::Boolean* isTraversable(::java::io::File* f) override;
	virtual ::java::io::File* resolveAlias(::java::io::File* mFile);
	static const bool DEBUG = false;
	static const int32_t UNINITALIZED_LS_INFO = (-1);
	static const int32_t kLSItemInfoIsPlainFile = 1;
	static const int32_t kLSItemInfoIsPackage = 2;
	static const int32_t kLSItemInfoIsApplication = 4;
	static const int32_t kLSItemInfoIsContainer = 8;
	static const int32_t kLSItemInfoIsAliasFile = 16;
	static const int32_t kLSItemInfoIsSymlink = 32;
	static const int32_t kLSItemInfoIsInvisible = 64;
	static const int32_t kLSItemInfoIsNativeApp = 128;
	static const int32_t kLSItemInfoIsClassicApp = 256;
	static const int32_t kLSItemInfoAppPrefersNative = 512;
	static const int32_t kLSItemInfoAppPrefersClassic = 1024;
	static const int32_t kLSItemInfoAppIsScriptable = 2048;
	static const int32_t kLSItemInfoIsVolume = 4096;
	static const int32_t kLSItemInfoExtensionIsHidden = 0x00100000;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* machineName;
	static const int32_t MAX_CACHED_ENTRIES = 256;
	::java::util::Map* cache = nullptr;
	::com::apple::laf::AquaFileChooserUI* fFileChooserUI = nullptr;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("MAX_CACHED_ENTRIES")
#pragma pop_macro("UNINITALIZED_LS_INFO")

#endif // _com_apple_laf_AquaFileView_h_