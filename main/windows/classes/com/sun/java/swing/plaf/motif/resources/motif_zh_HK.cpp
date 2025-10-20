#include <com/sun/java/swing/plaf/motif/resources/motif_zh_HK.h>

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
					namespace motif {
						namespace resources {

$MethodInfo _motif_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(motif_zh_HK::*)()>(&motif_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _motif_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.resources.motif_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_motif_zh_HK_MethodInfo_
};

$Object* allocate$motif_zh_HK($Class* clazz) {
	return $of($alloc(motif_zh_HK));
}

void motif_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("*"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4e2d\u6b62\u6a94\u6848\u9078\u64c7\u5668\u5c0d\u8a71\u65b9\u584a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFileNameLabel.textAndMnemonic"_s),
			$of(u"\u8f38\u5165\u6a94\u6848\u540d\u7a31(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFolderNameLabel.textAndMnemonic"_s),
			$of(u"\u8f38\u5165\u8cc7\u6599\u593e\u540d\u7a31:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\u6a94\u6848(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\u7be9\u9078(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\u8cc7\u6599\u593e(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\u8aaa\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"\u300c\u6a94\u6848\u9078\u64c7\u5668\u300d\u8aaa\u660e\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u958b\u555f\u9078\u53d6\u7684\u6a94\u6848\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u958b\u555f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of(u"\u8f38\u5165\u8def\u5f91\u6216\u8cc7\u6599\u593e\u540d\u7a31(&P):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u5132\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u5132\u5b58\u9078\u53d6\u7684\u6a94\u6848\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\u5132\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0\u76ee\u9304\u6e05\u55ae\u3002"_s)
		})
	});
}

motif_zh_HK::motif_zh_HK() {
}

$Class* motif_zh_HK::load$($String* name, bool initialize) {
	$loadClass(motif_zh_HK, name, initialize, &_motif_zh_HK_ClassInfo_, allocate$motif_zh_HK);
	return class$;
}

$Class* motif_zh_HK::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com