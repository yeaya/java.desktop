#include <com/sun/java/swing/plaf/gtk/resources/gtk_ko.h>

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

$MethodInfo _gtk_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gtk_ko::*)()>(&gtk_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _gtk_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.resources.gtk_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_gtk_ko_MethodInfo_
};

$Object* allocate$gtk_ko($Class* clazz) {
	return $of($alloc(gtk_ko));
}

void gtk_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of(u"\ubaa8\ub4e0 \ud30c\uc77c"_s)
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
			$of("FileChooser.deleteFileButton.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \uc0ad\uc81c(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\ud544\ud130:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of(u"\uc0c8 \ud3f4\ub354(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderDialog.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354 \uc774\ub984:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s),
			$of(u"\"{0}\" \ub514\ub809\ud1a0\ub9ac\ub97c \uc0dd\uc131\ud558\ub294 \uc911 \uc624\ub958 \ubc1c\uc0dd: \ud574\ub2f9 \ud30c\uc77c \ub610\ub294 \ub514\ub809\ud1a0\ub9ac\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s),
			$of(u"\uc624\ub958"_s)
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
			$of(u"\uc120\ud0dd\uc0ac\ud56d(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileButton.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \uc774\ub984 \ubc14\uafb8\uae30(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileDialog.textAndMnemonic"_s),
			$of(u"\"{0}\" \ud30c\uc77c\uc758 \uc774\ub984 \ubc14\uafb8\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.textAndMnemonic"_s),
			$of(u"\"{0}\" \ud30c\uc77c\uc758 \uc774\ub984\uc744 \"{1}\"(\uc73c)\ub85c \ubc14\uafb8\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.titleAndMnemonic"_s),
			$of(u"\uc624\ub958"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\ud655\uc778"_s)
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
			$of("GTKColorChooserPanel.blue.textAndMnemonic"_s),
			$of(u"\ud30c\ub780\uc0c9(&B):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.color.textAndMnemonic"_s),
			$of(u"\uc0c9\uc0c1 \uc774\ub984(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.green.textAndMnemonic"_s),
			$of(u"\ub179\uc0c9(&G):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.hue.textAndMnemonic"_s),
			$of(u"\uc0c9\uc870(&H):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.red.textAndMnemonic"_s),
			$of(u"\ube68\uac04\uc0c9(&E):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.saturation.textAndMnemonic"_s),
			$of(u"\ucc44\ub3c4(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.textAndMnemonic"_s),
			$of(u"GTK \uc0c9\uc0c1 \uc120\ud0dd\uae30(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.value.textAndMnemonic"_s),
			$of(u"\uac12(&V):"_s)
		})
	});
}

gtk_ko::gtk_ko() {
}

$Class* gtk_ko::load$($String* name, bool initialize) {
	$loadClass(gtk_ko, name, initialize, &_gtk_ko_ClassInfo_, allocate$gtk_ko);
	return class$;
}

$Class* gtk_ko::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com