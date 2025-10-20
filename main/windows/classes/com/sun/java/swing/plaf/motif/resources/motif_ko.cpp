#include <com/sun/java/swing/plaf/motif/resources/motif_ko.h>

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

$MethodInfo _motif_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(motif_ko::*)()>(&motif_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _motif_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.resources.motif_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_motif_ko_MethodInfo_
};

$Object* allocate$motif_ko($Class* clazz) {
	return $of($alloc(motif_ko));
}

void motif_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("*"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of(u"\ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButtonToolTip.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \uc120\ud0dd\uae30 \ub300\ud654\uc0c1\uc790\ub97c \uc911\ub2e8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFileNameLabel.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \uc774\ub984 \uc785\ub825(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFolderNameLabel.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354 \uc774\ub984 \uc785\ub825:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\ud544\ud130(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\ub3c4\uc6c0\ub9d0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"FileChooser \ub3c4\uc6c0\ub9d0\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\ud655\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc120\ud0dd\ub41c \ud30c\uc77c\uc744 \uc5fd\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\uc5f4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of(u"\uacbd\ub85c \ub610\ub294 \ud3f4\ub354 \uc774\ub984 \uc785\ub825(&P):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\uc800\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc120\ud0dd\ub41c \ud30c\uc77c\uc744 \uc800\uc7a5\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\uc800\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"\uc5c5\ub370\uc774\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of(u"\ub514\ub809\ud1a0\ub9ac \ubaa9\ub85d\uc744 \uc5c5\ub370\uc774\ud2b8\ud569\ub2c8\ub2e4."_s)
		})
	});
}

motif_ko::motif_ko() {
}

$Class* motif_ko::load$($String* name, bool initialize) {
	$loadClass(motif_ko, name, initialize, &_motif_ko_ClassInfo_, allocate$motif_ko);
	return class$;
}

$Class* motif_ko::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com