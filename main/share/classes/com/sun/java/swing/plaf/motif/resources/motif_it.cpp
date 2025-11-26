#include <com/sun/java/swing/plaf/motif/resources/motif_it.h>

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

$MethodInfo _motif_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(motif_it::*)()>(&motif_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _motif_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.resources.motif_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_motif_it_MethodInfo_
};

$Object* allocate$motif_it($Class* clazz) {
	return $of($alloc(motif_it));
}

void motif_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* motif_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("*"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of("Annulla"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButtonToolTip.textAndMnemonic"_s),
			$of("Chiude la finestra di dialogo di selezione file."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFileNameLabel.textAndMnemonic"_s),
			$of("Immettere il &nome file: "_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.enterFolderNameLabel.textAndMnemonic"_s),
			$of("Nome cartella:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of("F&ile"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of("Filt&ro"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of("Car&telle"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of("?"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of("Guida FileChooser."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of("Apre il file selezionato."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of("Apri"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of("&Percorso o nome cartella:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("Salva"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of("Salva il file selezionato."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of("Salva"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of("Aggiorna"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of("Aggiorna lista directory."_s)
		})
	});
}

motif_it::motif_it() {
}

$Class* motif_it::load$($String* name, bool initialize) {
	$loadClass(motif_it, name, initialize, &_motif_it_ClassInfo_, allocate$motif_it);
	return class$;
}

$Class* motif_it::class$ = nullptr;

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com