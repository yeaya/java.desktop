#include <com/sun/swing/internal/plaf/basic/resources/basic_zh_HK.h>

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
					namespace basic {
						namespace resources {

$MethodInfo _basic_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(basic_zh_HK::*)()>(&basic_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _basic_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.basic.resources.basic_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_basic_zh_HK_MethodInfo_
};

$Object* allocate$basic_zh_HK($Class* clazz) {
	return $of($alloc(basic_zh_HK));
}

void basic_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_zh_HK::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of(u"\u6309\u4e00\u4e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of(u"\u9644\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of(u"\u522a\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of(u"\u91cd\u505a"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of(u"\u6a23\u5f0f\u8b8a\u66f4"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of(u"\u9084\u539f"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of(u"\u91cd\u505a"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of(u"\u9084\u539f"_s)
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
			$of(u"\u85cd\u7da0\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykMagenta.textAndMnemonic"_s),
			$of(u"\u7d2b\u7d05\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykYellow.textAndMnemonic"_s),
			$of(u"\u9ec3\u8272"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsl.textAndMnemonic"_s),
			$of("HSL(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslHue.textAndMnemonic"_s),
			$of(u"\u8272\u8abf"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslLightness.textAndMnemonic"_s),
			$of(u"\u4eae\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslSaturation.textAndMnemonic"_s),
			$of(u"\u5f69\u5ea6"_s)
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
			$of(u"\u8272\u8abf"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvSaturation.textAndMnemonic"_s),
			$of(u"\u5f69\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvTransparency.textAndMnemonic"_s),
			$of(u"\u900f\u660e\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvValue.textAndMnemonic"_s),
			$of(u"\u6578\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.ok.textAndMnemonic"_s),
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of(u"\u9810\u89bd"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"\u91cd\u8a2d(&R)"_s)
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
			$of(u"\u85cd(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of(u"\u7da0(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbHexCode.textAndMnemonic"_s),
			$of(u"\u984f\u8272\u4ee3\u78bc(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of(u"\u7d05(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of(u"\u7bc4\u4f8b\u6587\u5b57  \u7bc4\u4f8b\u6587\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of(u"\u8abf\u8272\u677f(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of(u"\u6700\u65b0\u9078\u64c7:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of(u"\u5207\u63db\u5373\u73fe\u5f0f\u8996\u7a97"_s)
		}),
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
			$of(u"\u4e2d\u6b62\u6a94\u6848\u9078\u64c7\u5668\u5c0d\u8a71\u65b9\u584a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of(u"\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of(u"\u958b\u555f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s),
			$of(u"\u958b\u555f\u9078\u53d6\u7684\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of(u"\u4e00\u822c\u6a94\u6848"_s)
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
			$of(u"\u6a94\u6848\u8a73\u7d30\u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesListAccessibleName"_s),
			$of(u"\u6a94\u6848\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\u8aaa\u660e(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"\u300c\u6a94\u6848\u9078\u64c7\u5668\u300d\u8aaa\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of(u"\u5efa\u7acb\u65b0\u8cc7\u6599\u593e\u6642\u767c\u751f\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s),
			$of(u"\u7121\u6cd5\u5efa\u7acb\u8cc7\u6599\u593e\u3002\n\n\u7cfb\u7d71\u627e\u4e0d\u5230\u6307\u5b9a\u7684\u8def\u5f91\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s),
			$of(u"\u7121\u6cd5\u5efa\u7acb\u8cc7\u6599\u593e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u958b\u555f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u958b\u555f\u9078\u53d6\u7684\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u958b\u555f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.other.newFolder"_s),
			$of(u"\u65b0\u8cc7\u6599\u593e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.other.newFolder.subsequent"_s),
			$of(u"\u65b0\u8cc7\u6599\u593e.{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameError.textAndMnemonic"_s),
			$of(u"\u7121\u6cd5\u91cd\u65b0\u547d\u540d {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorFileExists.textAndMnemonic"_s),
			$of(u"\u7121\u6cd5\u91cd\u65b0\u547d\u540d {0}: \u5df2\u7d93\u5b58\u5728\u60a8\u6240\u6307\u5b9a\u540d\u7a31\u7684\u6a94\u6848\u3002\u8acb\u6307\u5b9a\u4e0d\u540c\u7684\u540d\u7a31\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorTitle.textAndMnemonic"_s),
			$of(u"\u91cd\u65b0\u547d\u540d\u6a94\u6848\u6216\u8cc7\u6599\u593e\u6642\u767c\u751f\u932f\u8aa4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u5132\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u5132\u5b58\u9078\u53d6\u7684\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\u5132\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0(&U)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of(u"\u66f4\u65b0\u76ee\u9304\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder"_s),
			$of(u"\u65b0\u8cc7\u6599\u593e"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder.subsequent"_s),
			$of(u"\u65b0\u8cc7\u6599\u593e ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of(u"\u700f\u89bd..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"\u91cd\u8a2d"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of(u"\u9001\u51fa\u67e5\u8a62"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of(u"\u95dc\u9589"_s)
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
			$of(u"\u5fa9\u539f"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of(u"\u95dc\u9589(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of(u"\u95dc\u9589"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of(u"\u5716\u793a\u5316"_s)
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
			$of(u"\u79fb\u52d5(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of(u"\u56de\u5fa9(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of(u"\u8abf\u6574\u5927\u5c0f(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"\u9019\u662f\u4e00\u500b\u53ef\u641c\u5c0b\u7684\u7d22\u5f15\u3002\u8f38\u5165\u641c\u5c0b\u95dc\u9375\u5b57: "_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of(u"\u8f38\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of(u"\u8a0a\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of(u"\u5426(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"\u9078\u53d6\u4e00\u500b\u9078\u9805"_s)
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
			$of(u"\u4e2d\u6b62\u5217\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of(u"\u6b63\u5728\u4e2d\u6b62\u5217\u5370..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of(u"\u6b63\u5728\u5217\u5370..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of(u"\u5df2\u5217\u5370\u7684\u9801\u9762 {0}..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of(u"\u5217\u5370 (\u4e2d\u6b62)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of(u"\u5217\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of(u"\u9032\u5ea6..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of(u"\u5de6\u6309\u9215"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of(u"\u53f3\u6309\u9215"_s)
		})
	});
}

basic_zh_HK::basic_zh_HK() {
}

$Class* basic_zh_HK::load$($String* name, bool initialize) {
	$loadClass(basic_zh_HK, name, initialize, &_basic_zh_HK_ClassInfo_, allocate$basic_zh_HK);
	return class$;
}

$Class* basic_zh_HK::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com