#include <com/sun/swing/internal/plaf/basic/resources/basic_zh_CN.h>

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
					namespace basic {
						namespace resources {

$MethodInfo _basic_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(basic_zh_CN::*)()>(&basic_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _basic_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.basic.resources.basic_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_basic_zh_CN_MethodInfo_
};

$Object* allocate$basic_zh_CN($Class* clazz) {
	return $of($alloc(basic_zh_CN));
}

void basic_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of(u"\u5355\u51fb"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of(u"\u6dfb\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of(u"\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of(u"\u91cd\u505a"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of(u"\u6837\u5f0f\u66f4\u6539"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of(u"\u64a4\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of(u"\u91cd\u505a"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of(u"\u64a4\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cancel.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmyk.textAndMnemonic"_s),
			$of("C&MYK"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykAlpha.textAndMnemonic"_s),
			$of("Alpha"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykBlack.textAndMnemonic"_s),
			$of(u"\u9ed1\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykCyan.textAndMnemonic"_s),
			$of(u"\u9752\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykMagenta.textAndMnemonic"_s),
			$of(u"\u7d2b\u7ea2\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykYellow.textAndMnemonic"_s),
			$of(u"\u9ec4\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsl.textAndMnemonic"_s),
			$of("HSL(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslHue.textAndMnemonic"_s),
			$of(u"\u8272\u8c03"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslLightness.textAndMnemonic"_s),
			$of(u"\u4eae\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslSaturation.textAndMnemonic"_s),
			$of(u"\u9971\u548c\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslTransparency.textAndMnemonic"_s),
			$of(u"\u900f\u660e\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsv.textAndMnemonic"_s),
			$of("HSV(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvHue.textAndMnemonic"_s),
			$of(u"\u8272\u8c03"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvSaturation.textAndMnemonic"_s),
			$of(u"\u9971\u548c\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvTransparency.textAndMnemonic"_s),
			$of(u"\u900f\u660e\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvValue.textAndMnemonic"_s),
			$of(u"\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.ok.textAndMnemonic"_s),
			$of(u"\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of(u"\u9884\u89c8"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"\u91cd\u7f6e(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("RGB(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbAlpha.textAndMnemonic"_s),
			$of("Alpha"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of(u"\u84dd\u8272(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of(u"\u7eff\u8272(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbHexCode.textAndMnemonic"_s),
			$of(u"\u989c\u8272\u4ee3\u7801(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of(u"\u7ea2\u8272(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of(u"\u793a\u4f8b\u6587\u672c  \u793a\u4f8b\u6587\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of(u"\u6837\u672c(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of(u"\u6700\u8fd1:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of("togglePopup"_s)
		}),
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
			$of(u"\u4e2d\u6b62\u6587\u4ef6\u9009\u62e9\u5668\u5bf9\u8bdd\u6846"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of(u"\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of(u"\u6253\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s),
			$of(u"\u6253\u5f00\u9009\u62e9\u7684\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of(u"\u901a\u7528\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeGigaBytes"_s),
			$of("{0} GB"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeKiloBytes"_s),
			$of("{0} KB"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeMegaBytes"_s),
			$of("{0} MB"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesDetailsAccessibleName"_s),
			$of(u"\u6587\u4ef6\u8be6\u7ec6\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesListAccessibleName"_s),
			$of(u"\u6587\u4ef6\u5217\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\u5e2e\u52a9(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"FileChooser \u5e2e\u52a9"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of(u"\u521b\u5efa\u65b0\u7684\u6587\u4ef6\u5939\u65f6\u51fa\u9519"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u6587\u4ef6\u5939\u3002\n\n\u7cfb\u7edf\u627e\u4e0d\u5230\u6307\u5b9a\u7684\u8def\u5f84\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u6587\u4ef6\u5939"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u6253\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u6253\u5f00\u6240\u9009\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u6253\u5f00"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.other.newFolder"_s),
			$of("NewFolder"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.other.newFolder.subsequent"_s),
			$of("NewFolder.{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameError.textAndMnemonic"_s),
			$of(u"\u65e0\u6cd5\u91cd\u547d\u540d{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorFileExists.textAndMnemonic"_s),
			$of(u"\u65e0\u6cd5\u91cd\u547d\u540d{0}: \u5df2\u5b58\u5728\u5177\u6709\u6240\u6307\u5b9a\u540d\u79f0\u7684\u6587\u4ef6\u3002\u8bf7\u6307\u5b9a\u5176\u4ed6\u6587\u4ef6\u540d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorTitle.textAndMnemonic"_s),
			$of(u"\u91cd\u547d\u540d\u6587\u4ef6\u6216\u6587\u4ef6\u5939\u65f6\u51fa\u9519"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58\u6240\u9009\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0(&U)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0\u76ee\u5f55\u5217\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder"_s),
			$of(u"\u65b0\u5efa\u6587\u4ef6\u5939"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder.subsequent"_s),
			$of(u"\u65b0\u5efa\u6587\u4ef6\u5939 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of(u"\u6d4f\u89c8..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"\u91cd\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of(u"\u63d0\u4ea4\u67e5\u8be2"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of(u"\u5173\u95ed"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.iconButtonToolTip"_s),
			$of(u"\u6700\u5c0f\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.maxButtonToolTip"_s),
			$of(u"\u6700\u5927\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.restoreButtonToolTip"_s),
			$of(u"\u8fd8\u539f"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of(u"\u5173\u95ed(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of(u"\u5173\u95ed"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of(u"\u56fe\u6807\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s),
			$of(u"\u6700\u5927\u5316(&X)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButtonAccessibleName"_s),
			$of(u"\u6700\u5927\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s),
			$of(u"\u6700\u5c0f\u5316(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.moveButton.textAndMnemonic"_s),
			$of(u"\u79fb\u52a8(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of(u"\u8fd8\u539f(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of(u"\u5927\u5c0f(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"\u8fd9\u662f\u53ef\u641c\u7d22\u7d22\u5f15\u3002\u8bf7\u8f93\u5165\u641c\u7d22\u5173\u952e\u5b57: "_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of(u"\u8f93\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of(u"\u6d88\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of(u"\u5426(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of(u"\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"\u9009\u62e9\u4e00\u4e2a\u9009\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of(u"\u662f(&Y)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of(u"\u4e2d\u6b62(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of(u"\u4e2d\u6b62\u6253\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of(u"\u6b63\u5728\u4e2d\u6b62\u6253\u5370..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of(u"\u6b63\u5728\u8fdb\u884c\u6253\u5370..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of(u"\u5df2\u6253\u5370\u9875 {0}..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of(u"\u6253\u5370 (\u6b63\u5728\u4e2d\u6b62)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of(u"\u6253\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of(u"\u8fdb\u5ea6..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of(u"\u5de6\u952e"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of(u"\u53f3\u952e"_s)
		})
	});
}

basic_zh_CN::basic_zh_CN() {
}

$Class* basic_zh_CN::load$($String* name, bool initialize) {
	$loadClass(basic_zh_CN, name, initialize, &_basic_zh_CN_ClassInfo_, allocate$basic_zh_CN);
	return class$;
}

$Class* basic_zh_CN::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com