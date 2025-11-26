#include <com/sun/java/swing/plaf/gtk/resources/gtk_zh_CN.h>

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

$MethodInfo _gtk_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gtk_zh_CN::*)()>(&gtk_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _gtk_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.resources.gtk_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_gtk_zh_CN_MethodInfo_
};

$Object* allocate$gtk_zh_CN($Class* clazz) {
	return $of($alloc(gtk_zh_CN));
}

void gtk_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* gtk_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of(u"\u6240\u6709\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4e2d\u6b62\u6587\u4ef6\u9009\u62e9\u5668\u5bf9\u8bdd\u6846\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.deleteFileButton.textAndMnemonic"_s),
			$of(u"\u5220\u9664\u6587\u4ef6(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesLabel.textAndMnemonic"_s),
			$of(u"\u6587\u4ef6(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filterLabel.textAndMnemonic"_s),
			$of(u"\u7b5b\u9009\u5668: "_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.foldersLabel.textAndMnemonic"_s),
			$of(u"\u6587\u4ef6\u5939(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of(u"\u65b0\u6587\u4ef6\u5939(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderDialog.textAndMnemonic"_s),
			$of(u"\u6587\u4ef6\u5939\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryError.textAndMnemonic"_s),
			$of(u"\u521b\u5efa\u76ee\u5f55 \"{0}\" \u65f6\u51fa\u9519: \u6ca1\u6709\u6b64\u7c7b\u6587\u4ef6\u6216\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderNoDirectoryErrorTitle.textAndMnemonic"_s),
			$of(u"\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u6253\u5f00\u6240\u9009\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u6253\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.pathLabel.textAndMnemonic"_s),
			$of(u"\u9009\u5b9a\u5185\u5bb9(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileButton.textAndMnemonic"_s),
			$of(u"\u91cd\u547d\u540d\u6587\u4ef6(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileDialog.textAndMnemonic"_s),
			$of(u"\u5c06\u6587\u4ef6 \"{0}\" \u91cd\u547d\u540d\u4e3a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.textAndMnemonic"_s),
			$of(u"\u5c06\u6587\u4ef6 \"{0}\" \u91cd\u547d\u540d\u4e3a \"{1}\" \u65f6\u51fa\u9519"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameFileError.titleAndMnemonic"_s),
			$of(u"\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58\u6240\u9009\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.blue.textAndMnemonic"_s),
			$of(u"\u84dd\u8272(&B):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.color.textAndMnemonic"_s),
			$of(u"\u989c\u8272\u540d(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.green.textAndMnemonic"_s),
			$of(u"\u7eff\u8272(&G):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.hue.textAndMnemonic"_s),
			$of(u"\u8272\u8c03(&H):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.red.textAndMnemonic"_s),
			$of(u"\u7ea2\u8272(&E):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.saturation.textAndMnemonic"_s),
			$of(u"\u9971\u548c\u5ea6(&S):"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.textAndMnemonic"_s),
			$of(u"GTK \u989c\u8272\u9009\u62e9\u5668(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("GTKColorChooserPanel.value.textAndMnemonic"_s),
			$of(u"\u503c(&V):"_s)
		})
	});
}

gtk_zh_CN::gtk_zh_CN() {
}

$Class* gtk_zh_CN::load$($String* name, bool initialize) {
	$loadClass(gtk_zh_CN, name, initialize, &_gtk_zh_CN_ClassInfo_, allocate$gtk_zh_CN);
	return class$;
}

$Class* gtk_zh_CN::class$ = nullptr;

						} // resources
					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com