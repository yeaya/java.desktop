#include <com/sun/java/swing/plaf/motif/resources/motif.h>

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

$MethodInfo _motif_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(motif::*)()>(&motif::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _motif_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.resources.motif",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_motif_MethodInfo_
};

$Object* allocate$motif($Class* clazz) {
	return $of($alloc(motif));
}

void motif::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("*"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of("Cancel"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButtonToolTip.textAndMnemonic"_s),
			$of("Abort file chooser dialog."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFileNameLabel.textAndMnemonic"_s),
			$of("E&nter file name:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFolderNameLabel.textAndMnemonic"_s),
			$of("Enter folder name:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of("F&iles"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of("Filte&r"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of("Fo&lders"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of("Help"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of("FileChooser help."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of("Open selected file."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of("Open"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of("Enter &path or folder name:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("Save"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of("Save selected file."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of("Save"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of("Update"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of("Update directory listing."_s)
		})
	});
}

motif::motif() {
}

$Class* motif::load$($String* name, bool initialize) {
	$loadClass(motif, name, initialize, &_motif_ClassInfo_, allocate$motif);
	return class$;
}

$Class* motif::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com