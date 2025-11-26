#include <com/sun/java/swing/plaf/gtk/resources/gtk_it.h>

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
					namespace gtk {
						namespace resources {

$MethodInfo _gtk_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gtk_it::*)()>(&gtk_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _gtk_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.resources.gtk_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_gtk_it_MethodInfo_
};

$Object* allocate$gtk_it($Class* clazz) {
	return $of($alloc(gtk_it));
}

void gtk_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("Tutti i file"_s)
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
			$of("FileChooser.deleteFileButton.textAndMnemonic"_s),
			$of("E&limina file"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of("&File"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of("Filtro:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of("Car&telle"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of("&Nuova cartella"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderDialog.textAndMnemonic"_s),
			$of("Nome della cartella:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s),
			$of("Errore durante la creazione della directory \"{0}\": file o directory inesistente"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s),
			$of("Errore"_s)
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
			$of("&Selezione:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileButton.textAndMnemonic"_s),
			$of("&Rinomina file"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileDialog.textAndMnemonic"_s),
			$of("Rinomina file \"{0}\" in"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.textAndMnemonic"_s),
			$of("Errore durante la ridenominazione del file \"{0}\" in \"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.titleAndMnemonic"_s),
			$of("Errore"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("OK"_s)
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
			$of("GTKColorChooserPanel.blue.textAndMnemonic"_s),
			$of("&Blu:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.color.textAndMnemonic"_s),
			$of("&Nome colore:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.green.textAndMnemonic"_s),
			$of("&Verde:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.hue.textAndMnemonic"_s),
			$of("&Ton.:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.red.textAndMnemonic"_s),
			$of("R&osso:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.saturation.textAndMnemonic"_s),
			$of("&Saturazione:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.textAndMnemonic"_s),
			$of("Selezione colore &GTK"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.value.textAndMnemonic"_s),
			$of("&Valore:"_s)
		})
	});
}

gtk_it::gtk_it() {
}

$Class* gtk_it::load$($String* name, bool initialize) {
	$loadClass(gtk_it, name, initialize, &_gtk_it_ClassInfo_, allocate$gtk_it);
	return class$;
}

$Class* gtk_it::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com