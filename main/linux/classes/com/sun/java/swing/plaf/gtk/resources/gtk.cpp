#include <com/sun/java/swing/plaf/gtk/resources/gtk.h>

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

$MethodInfo _gtk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gtk::*)()>(&gtk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _gtk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.resources.gtk",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_gtk_MethodInfo_
};

$Object* allocate$gtk($Class* clazz) {
	return $of($alloc(gtk));
}

void gtk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("All Files"_s)
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
			$of("FileChooser.deleteFileButton.textAndMnemonic"_s),
			$of("De&lete File"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of("&Files"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of("Filter:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of("Fol&ders"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of("&New Folder"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderDialog.textAndMnemonic"_s),
			$of("Folder name:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s),
			$of("Error creating directory \"{0}\": No such file or directory"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s),
			$of("Error"_s)
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
			$of("&Selection:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileButton.textAndMnemonic"_s),
			$of("&Rename File"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileDialog.textAndMnemonic"_s),
			$of("Rename file \"{0}\" to"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.textAndMnemonic"_s),
			$of("Error renaming file \"{0}\" to \"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.titleAndMnemonic"_s),
			$of("Error"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("OK"_s)
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
			$of("GTKColorChooserPanel.blue.textAndMnemonic"_s),
			$of("&Blue:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.color.textAndMnemonic"_s),
			$of("Color &Name:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.green.textAndMnemonic"_s),
			$of("&Green:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.hue.textAndMnemonic"_s),
			$of("&Hue:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.red.textAndMnemonic"_s),
			$of("R&ed:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.saturation.textAndMnemonic"_s),
			$of("&Saturation:"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.textAndMnemonic"_s),
			$of("&GTK Color Chooser"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.value.textAndMnemonic"_s),
			$of("&Value:"_s)
		})
	});
}

gtk::gtk() {
}

$Class* gtk::load$($String* name, bool initialize) {
	$loadClass(gtk, name, initialize, &_gtk_ClassInfo_, allocate$gtk);
	return class$;
}

$Class* gtk::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com