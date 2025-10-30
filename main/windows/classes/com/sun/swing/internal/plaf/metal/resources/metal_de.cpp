#include <com/sun/swing/internal/plaf/metal/resources/metal_de.h>

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

$MethodInfo _metal_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(metal_de::*)()>(&metal_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _metal_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.metal.resources.metal_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_metal_de_MethodInfo_
};

$Object* allocate$metal_de($Class* clazz) {
	return $of($alloc(metal_de));
}

void metal_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* metal_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewActionLabel.textAndMnemonic"_s),
			$of("Details"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonAccessibleName"_s),
			$of("Details"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s),
			$of("Details"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileAttrHeader.textAndMnemonic"_s),
			$of("Attribute"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDateHeader.textAndMnemonic"_s),
			$of(u"Ge\u00e4ndert"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameHeader.textAndMnemonic"_s),
			$of("Name"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of("&Dateiname:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeHeader.textAndMnemonic"_s),
			$of(u"Gr\u00f6\u00dfe"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileTypeHeader.textAndMnemonic"_s),
			$of("Typ"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of("Datei&typ:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.folderNameLabel.textAndMnemonic"_s),
			$of("Ordner&name:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderAccessibleName"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderToolTip.textAndMnemonic"_s),
			$of("Home"_s)
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
			$of("Suchen &in:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of("Neuer Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderActionLabel.textAndMnemonic"_s),
			$of("Neuer Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderToolTip.textAndMnemonic"_s),
			$of("Neuen Ordner erstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.refreshActionLabel.textAndMnemonic"_s),
			$of("Aktualisieren"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveInLabel.textAndMnemonic"_s),
			$of("Speichern in:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderAccessibleName"_s),
			$of("Nach oben"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderToolTip.textAndMnemonic"_s),
			$of(u"Eine Ebene h\u00f6her"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of("Ansicht"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.close.titleAndMnemonic"_s),
			$of(u"&Schlie\u00dfen"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.iconify.titleAndMnemonic"_s),
			$of("Minimie&ren"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.maximize.titleAndMnemonic"_s),
			$of("Ma&ximieren"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.restore.titleAndMnemonic"_s),
			$of("&Wiederherstellen"_s)
		})
	});
}

metal_de::metal_de() {
}

$Class* metal_de::load$($String* name, bool initialize) {
	$loadClass(metal_de, name, initialize, &_metal_de_ClassInfo_, allocate$metal_de);
	return class$;
}

$Class* metal_de::class$ = nullptr;

						} // resources
					} // metal
				} // plaf
			} // internal
		} // swing
	} // sun
} // com