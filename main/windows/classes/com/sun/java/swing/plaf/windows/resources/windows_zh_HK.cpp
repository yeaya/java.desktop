#include <com/sun/java/swing/plaf/windows/resources/windows_zh_HK.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						namespace resources {

$MethodInfo _windows_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(windows_zh_HK::*)()>(&windows_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _windows_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.resources.windows_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_windows_zh_HK_MethodInfo_
};

$Object* allocate$windows_zh_HK($Class* clazz) {
	return $of($alloc(windows_zh_HK));
}

void windows_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* windows_zh_HK::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewActionLabel.textAndMnemonic"_s),
			$of(u"\u8a73\u7d30\u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonAccessibleName"_s),
			$of(u"\u8a73\u7d30\u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s),
			$of(u"\u8a73\u7d30\u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileAttrHeader.textAndMnemonic"_s),
			$of(u"\u5c6c\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDateHeader.textAndMnemonic"_s),
			$of(u"\u4fee\u6539\u65e5\u671f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameHeader.textAndMnemonic"_s),
			$of(u"\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of(u"\u6a94\u6848\u540d\u7a31(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeHeader.textAndMnemonic"_s),
			$of(u"\u5927\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileTypeHeader.textAndMnemonic"_s),
			$of(u"\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of(u"\u6a94\u6848\u985e\u578b(&T):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.folderNameLabel.textAndMnemonic"_s),
			$of(u"\u8cc7\u6599\u593e\u540d\u7a31(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderAccessibleName"_s),
			$of(u"\u4e3b\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderToolTip.textAndMnemonic"_s),
			$of(u"\u4e3b\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewActionLabel.textAndMnemonic"_s),
			$of(u"\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonAccessibleName"_s),
			$of(u"\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonToolTip.textAndMnemonic"_s),
			$of(u"\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.lookInLabel.textAndMnemonic"_s),
			$of(u"\u67e5\u8a62(&I):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of(u"\u65b0\u8cc7\u6599\u593e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderActionLabel.textAndMnemonic"_s),
			$of(u"\u65b0\u8cc7\u6599\u593e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderToolTip.textAndMnemonic"_s),
			$of(u"\u5efa\u7acb\u65b0\u8cc7\u6599\u593e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.refreshActionLabel.textAndMnemonic"_s),
			$of(u"\u91cd\u65b0\u6574\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveInLabel.textAndMnemonic"_s),
			$of(u"\u5132\u5b58\u65bc: "_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderAccessibleName"_s),
			$of(u"\u5f80\u4e0a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderToolTip.textAndMnemonic"_s),
			$of(u"\u5f80\u4e0a\u4e00\u5c64"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuButtonAccessibleName"_s),
			$of(u"\u6aa2\u8996\u529f\u80fd\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuButtonToolTipText"_s),
			$of(u"\u6aa2\u8996\u529f\u80fd\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of(u"\u6aa2\u8996"_s)
		})
	});
}

windows_zh_HK::windows_zh_HK() {
}

$Class* windows_zh_HK::load$($String* name, bool initialize) {
	$loadClass(windows_zh_HK, name, initialize, &_windows_zh_HK_ClassInfo_, allocate$windows_zh_HK);
	return class$;
}

$Class* windows_zh_HK::class$ = nullptr;

						} // resources
					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com