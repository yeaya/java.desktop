#include <com/sun/java/swing/plaf/gtk/resources/gtk_ja.h>

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

$MethodInfo _gtk_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gtk_ja::*)()>(&gtk_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _gtk_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.resources.gtk_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_gtk_ja_MethodInfo_
};

$Object* allocate$gtk_ja($Class* clazz) {
	return $of($alloc(gtk_ja));
}

void gtk_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of(u"\u3059\u3079\u3066\u306e\u30d5\u30a1\u30a4\u30eb"_s)
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
			$of("FileChooser.deleteFileButton.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306e\u524a\u9664(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a3\u30eb\u30bf:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderDialog.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0\u540d:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s),
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\"{0}\"\u306e\u4f5c\u6210\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f: \u3053\u306e\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s),
			$of(u"\u30a8\u30e9\u30fc"_s)
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
			$of(u"\u9078\u629e(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileButton.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306e\u540d\u524d\u5909\u66f4(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileDialog.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\"{0}\"\u3092\u6b21\u306e\u540d\u524d\u306b\u5909\u66f4:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\"{0}\"\u306e\"{1}\"\u3078\u306e\u5909\u66f4\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.titleAndMnemonic"_s),
			$of(u"\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("OK"_s)
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
			$of("GTKColorChooserPanel.blue.textAndMnemonic"_s),
			$of(u"\u9752(&B):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.color.textAndMnemonic"_s),
			$of(u"\u8272\u540d(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.green.textAndMnemonic"_s),
			$of(u"\u7dd1(&G):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.hue.textAndMnemonic"_s),
			$of(u"\u8272\u76f8(&H):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.red.textAndMnemonic"_s),
			$of(u"\u8d64(&E):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.saturation.textAndMnemonic"_s),
			$of(u"\u5f69\u5ea6(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.textAndMnemonic"_s),
			$of(u"GTK\u30ab\u30e9\u30fc\u30fb\u30c1\u30e5\u30fc\u30b6(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.value.textAndMnemonic"_s),
			$of(u"\u5024(&V):"_s)
		})
	});
}

gtk_ja::gtk_ja() {
}

$Class* gtk_ja::load$($String* name, bool initialize) {
	$loadClass(gtk_ja, name, initialize, &_gtk_ja_ClassInfo_, allocate$gtk_ja);
	return class$;
}

$Class* gtk_ja::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com