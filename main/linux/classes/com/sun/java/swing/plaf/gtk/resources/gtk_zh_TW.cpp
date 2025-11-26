#include <com/sun/java/swing/plaf/gtk/resources/gtk_zh_TW.h>

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

$MethodInfo _gtk_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gtk_zh_TW::*)()>(&gtk_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _gtk_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.resources.gtk_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_gtk_zh_TW_MethodInfo_
};

$Object* allocate$gtk_zh_TW($Class* clazz) {
	return $of($alloc(gtk_zh_TW));
}

void gtk_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of(u"\u6240\u6709\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4e2d\u6b62\u6a94\u6848\u9078\u64c7\u5668\u5c0d\u8a71\u65b9\u584a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.deleteFileButton.textAndMnemonic"_s),
			$of(u"\u522a\u9664\u6a94\u6848(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\u6a94\u6848(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\u7be9\u9078:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\u8cc7\u6599\u593e(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of(u"\u65b0\u5efa\u8cc7\u6599\u593e(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderDialog.textAndMnemonic"_s),
			$of(u"\u8cc7\u6599\u593e\u540d\u7a31:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s),
			$of(u"\u5efa\u7acb\u76ee\u9304 \"{0}\" \u6642\u767c\u751f\u932f\u8aa4: \u6c92\u6709\u6b64\u6a94\u6848\u6216\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s),
			$of(u"\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u958b\u555f\u9078\u53d6\u7684\u6a94\u6848\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u958b\u555f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of(u"\u9078\u53d6(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileButton.textAndMnemonic"_s),
			$of(u"\u91cd\u65b0\u547d\u540d\u6a94\u6848(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileDialog.textAndMnemonic"_s),
			$of(u"\u5c07\u6a94\u6848 \"{0}\" \u91cd\u65b0\u547d\u540d\u70ba"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.textAndMnemonic"_s),
			$of(u"\u5c07\u6a94\u6848 \"{0}\" \u91cd\u65b0\u547d\u540d\u70ba \"{1}\" \u6642\u51fa\u73fe\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.titleAndMnemonic"_s),
			$of(u"\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u5132\u5b58\u9078\u53d6\u7684\u6a94\u6848\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\u5132\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.blue.textAndMnemonic"_s),
			$of(u"\u85cd(&B):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.color.textAndMnemonic"_s),
			$of(u"\u984f\u8272\u540d\u7a31(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.green.textAndMnemonic"_s),
			$of(u"\u7da0(&G):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.hue.textAndMnemonic"_s),
			$of(u"\u8272\u8abf(&H):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.red.textAndMnemonic"_s),
			$of(u"\u7d05(&E):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.saturation.textAndMnemonic"_s),
			$of(u"\u5f69\u5ea6(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.textAndMnemonic"_s),
			$of(u"GTK \u8272\u5f69\u9078\u64c7\u5668(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.value.textAndMnemonic"_s),
			$of(u"\u503c(&V):"_s)
		})
	});
}

gtk_zh_TW::gtk_zh_TW() {
}

$Class* gtk_zh_TW::load$($String* name, bool initialize) {
	$loadClass(gtk_zh_TW, name, initialize, &_gtk_zh_TW_ClassInfo_, allocate$gtk_zh_TW);
	return class$;
}

$Class* gtk_zh_TW::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com