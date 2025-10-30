#include <com/sun/swing/internal/plaf/metal/resources/metal_zh_TW.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace metal {
						namespace resources {

$MethodInfo _metal_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(metal_zh_TW::*)()>(&metal_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _metal_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.metal.resources.metal_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_metal_zh_TW_MethodInfo_
};

$Object* allocate$metal_zh_TW($Class* clazz) {
	return $of($alloc(metal_zh_TW));
}

void metal_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* metal_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of(u"\u6aa2\u8996"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.close.titleAndMnemonic"_s),
			$of(u"\u95dc\u9589(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.iconify.titleAndMnemonic"_s),
			$of(u"\u6700\u5c0f\u5316(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.maximize.titleAndMnemonic"_s),
			$of(u"\u6700\u5927\u5316(&X)"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.restore.titleAndMnemonic"_s),
			$of(u"\u56de\u5fa9(&R)"_s)
		})
	});
}

metal_zh_TW::metal_zh_TW() {
}

$Class* metal_zh_TW::load$($String* name, bool initialize) {
	$loadClass(metal_zh_TW, name, initialize, &_metal_zh_TW_ClassInfo_, allocate$metal_zh_TW);
	return class$;
}

$Class* metal_zh_TW::class$ = nullptr;

						} // resources
					} // metal
				} // plaf
			} // internal
		} // swing
	} // sun
} // com