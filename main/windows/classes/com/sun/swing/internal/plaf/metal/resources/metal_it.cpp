#include <com/sun/swing/internal/plaf/metal/resources/metal_it.h>

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
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace metal {
						namespace resources {

$MethodInfo _metal_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(metal_it::*)()>(&metal_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _metal_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.metal.resources.metal_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_metal_it_MethodInfo_
};

$Object* allocate$metal_it($Class* clazz) {
	return $of($alloc(metal_it));
}

void metal_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* metal_it::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewActionLabel.textAndMnemonic"_s),
			$of("Dettagli"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonAccessibleName"_s),
			$of("Dettagli"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s),
			$of("Dettagli"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileAttrHeader.textAndMnemonic"_s),
			$of("Attributi"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDateHeader.textAndMnemonic"_s),
			$of("Modificato"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameHeader.textAndMnemonic"_s),
			$of("Nome"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of("&Nome file:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeHeader.textAndMnemonic"_s),
			$of("Dimensioni"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileTypeHeader.textAndMnemonic"_s),
			$of("Tipo"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of("&Tipo di file:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.folderNameLabel.textAndMnemonic"_s),
			$of("&Nome cartella:"_s)
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
			$of("Lista"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonAccessibleName"_s),
			$of("Lista"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonToolTip.textAndMnemonic"_s),
			$of("Lista"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.lookInLabel.textAndMnemonic"_s),
			$of("Cerca &in:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of("Nuova cartella"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderActionLabel.textAndMnemonic"_s),
			$of("Nuova cartella"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderToolTip.textAndMnemonic"_s),
			$of("Crea nuova cartella"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.refreshActionLabel.textAndMnemonic"_s),
			$of("Aggiorna"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveInLabel.textAndMnemonic"_s),
			$of("Salva in:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderAccessibleName"_s),
			$of("Superiore"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderToolTip.textAndMnemonic"_s),
			$of("Cartella superiore"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of("Visualizza"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.close.titleAndMnemonic"_s),
			$of("&Chiudi"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.iconify.titleAndMnemonic"_s),
			$of("Rid&uci a icona"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.maximize.titleAndMnemonic"_s),
			$of("In&grandisci"_s)
		}),
		$$new($ObjectArray, {
			$of("MetalTitlePane.restore.titleAndMnemonic"_s),
			$of("&Ripristina"_s)
		})
	});
}

metal_it::metal_it() {
}

$Class* metal_it::load$($String* name, bool initialize) {
	$loadClass(metal_it, name, initialize, &_metal_it_ClassInfo_, allocate$metal_it);
	return class$;
}

$Class* metal_it::class$ = nullptr;

						} // resources
					} // metal
				} // plaf
			} // internal
		} // swing
	} // sun
} // com