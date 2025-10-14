#include <com/sun/java/swing/plaf/motif/resources/motif_zh_CN.h>

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

$MethodInfo _motif_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(motif_zh_CN::*)()>(&motif_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _motif_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.resources.motif_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_motif_zh_CN_MethodInfo_
};

$Object* allocate$motif_zh_CN($Class* clazz) {
	return $of($alloc(motif_zh_CN));
}

void motif_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_zh_CN::getContents() {
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
			$of(u"\u4e2d\u6b62\u6587\u4ef6\u9009\u62e9\u5668\u5bf9\u8bdd\u6846\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFileNameLabel.textAndMnemonic"_s),
			$of(u"\u8f93\u5165\u6587\u4ef6\u540d(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFolderNameLabel.textAndMnemonic"_s),
			$of(u"\u8f93\u5165\u6587\u4ef6\u5939\u540d:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\u6587\u4ef6(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\u7b5b\u9009\u5668(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\u6587\u4ef6\u5939(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\u5e2e\u52a9"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"FileChooser \u5e2e\u52a9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u6253\u5f00\u6240\u9009\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u6253\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of(u"\u8f93\u5165\u8def\u5f84\u6216\u6587\u4ef6\u5939\u540d(&P):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58\u6240\u9009\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0\u76ee\u5f55\u5217\u8868\u3002"_s)
		})
	});
}

motif_zh_CN::motif_zh_CN() {
}

$Class* motif_zh_CN::load$($String* name, bool initialize) {
	$loadClass(motif_zh_CN, name, initialize, &_motif_zh_CN_ClassInfo_, allocate$motif_zh_CN);
	return class$;
}

$Class* motif_zh_CN::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com