#include <com/sun/java/swing/plaf/windows/resources/windows_fr.h>

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

$MethodInfo _windows_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(windows_fr::*)()>(&windows_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _windows_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.resources.windows_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_windows_fr_MethodInfo_
};

$Object* allocate$windows_fr($Class* clazz) {
	return $of($alloc(windows_fr));
}

void windows_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* windows_fr::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewActionLabel.textAndMnemonic"_s),
			$of(u"D\u00e9tails"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonAccessibleName"_s),
			$of(u"D\u00e9tails"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s),
			$of(u"D\u00e9tails"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileAttrHeader.textAndMnemonic"_s),
			$of("Attributs"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDateHeader.textAndMnemonic"_s),
			$of(u"Modifi\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameHeader.textAndMnemonic"_s),
			$of("Nom"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of("&Nom du fichier :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeHeader.textAndMnemonic"_s),
			$of("Taille"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileTypeHeader.textAndMnemonic"_s),
			$of("Type"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of("&Type de fichier :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.folderNameLabel.textAndMnemonic"_s),
			$of("&Nom du dossier :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderAccessibleName"_s),
			$of(u"R\u00e9pertoire de base"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderToolTip.textAndMnemonic"_s),
			$of(u"R\u00e9pertoire de base"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewActionLabel.textAndMnemonic"_s),
			$of("Liste"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonAccessibleName"_s),
			$of("Liste"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonToolTip.textAndMnemonic"_s),
			$of("Liste"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.lookInLabel.textAndMnemonic"_s),
			$of("Rechercher &dans :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of("Nouveau dossier"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderActionLabel.textAndMnemonic"_s),
			$of("Nouveau dossier"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderToolTip.textAndMnemonic"_s),
			$of(u"Cr\u00e9e un dossier."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.refreshActionLabel.textAndMnemonic"_s),
			$of("Actualiser"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveInLabel.textAndMnemonic"_s),
			$of("Enregistrer dans :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderAccessibleName"_s),
			$of("Monter"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderToolTip.textAndMnemonic"_s),
			$of("Remonte d\'un niveau."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuButtonAccessibleName"_s),
			$of("Menu Affichage"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuButtonToolTipText"_s),
			$of("Menu Affichage"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of("Affichage"_s)
		})
	});
}

windows_fr::windows_fr() {
}

$Class* windows_fr::load$($String* name, bool initialize) {
	$loadClass(windows_fr, name, initialize, &_windows_fr_ClassInfo_, allocate$windows_fr);
	return class$;
}

$Class* windows_fr::class$ = nullptr;

						} // resources
					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com