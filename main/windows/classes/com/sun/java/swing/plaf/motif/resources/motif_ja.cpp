#include <com/sun/java/swing/plaf/motif/resources/motif_ja.h>

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

$MethodInfo _motif_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(motif_ja::*)()>(&motif_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _motif_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.resources.motif_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_motif_ja_MethodInfo_
};

$Object* allocate$motif_ja($Class* clazz) {
	return $of($alloc(motif_ja));
}

void motif_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_ja::getContents() {
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
			$of(u"\u30d5\u30a1\u30a4\u30eb\u30fb\u30c1\u30e5\u30fc\u30b6\u30fb\u30c0\u30a4\u30a2\u30ed\u30b0\u3092\u7d42\u4e86\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFileNameLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u540d\u3092\u5165\u529b(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFolderNameLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0\u540d\u3092\u5165\u529b:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a3\u30eb\u30bf(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\u30d8\u30eb\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"FileChooser\u306e\u30d8\u30eb\u30d7\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u9078\u629e\u3057\u305f\u30d5\u30a1\u30a4\u30eb\u3092\u958b\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u958b\u304f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of(u"\u30d1\u30b9\u307e\u305f\u306f\u30d5\u30a9\u30eb\u30c0\u540d\u3092\u5165\u529b(&P):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u9078\u629e\u3057\u305f\u30d5\u30a1\u30a4\u30eb\u3092\u4fdd\u5b58\u3057\u307e\u3059\u3002"_s)
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
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306e\u30ea\u30b9\u30c8\u3092\u66f4\u65b0\u3057\u307e\u3059\u3002"_s)
		})
	});
}

motif_ja::motif_ja() {
}

$Class* motif_ja::load$($String* name, bool initialize) {
	$loadClass(motif_ja, name, initialize, &_motif_ja_ClassInfo_, allocate$motif_ja);
	return class$;
}

$Class* motif_ja::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com