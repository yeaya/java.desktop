#include <com/sun/swing/internal/plaf/basic/resources/basic_ja.h>

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

$MethodInfo _basic_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(basic_ja::*)()>(&basic_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _basic_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.basic.resources.basic_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_basic_ja_MethodInfo_
};

$Object* allocate$basic_ja($Class* clazz) {
	return $of($alloc(basic_ja));
}

void basic_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of(u"\u30af\u30ea\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of(u"\u8ffd\u52a0"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of(u"\u524a\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of(u"\u3084\u308a\u76f4\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u5909\u66f4"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of(u"\u5143\u306b\u623b\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of(u"\u3084\u308a\u76f4\u3057"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of(u"\u5143\u306b\u623b\u3059"_s)
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
			$of(u"\u30a2\u30eb\u30d5\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykBlack.textAndMnemonic"_s),
			$of(u"\u9ed2"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykCyan.textAndMnemonic"_s),
			$of(u"\u30b7\u30a2\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykMagenta.textAndMnemonic"_s),
			$of(u"\u30de\u30bc\u30f3\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykYellow.textAndMnemonic"_s),
			$of(u"\u9ec4"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsl.textAndMnemonic"_s),
			$of("HSL(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslHue.textAndMnemonic"_s),
			$of(u"\u8272\u76f8"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslLightness.textAndMnemonic"_s),
			$of(u"\u660e\u5ea6"_s)
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
			$of(u"\u8272\u76f8"_s)
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
			$of(u"\u5024"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.ok.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of(u"\u30d7\u30ec\u30d3\u30e5\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"\u30ea\u30bb\u30c3\u30c8(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("RGB(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbAlpha.textAndMnemonic"_s),
			$of(u"\u30a2\u30eb\u30d5\u30a1"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of(u"\u9752(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of(u"\u7dd1(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbHexCode.textAndMnemonic"_s),
			$of(u"\u8272\u30b3\u30fc\u30c9(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of(u"\u8d64(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of(u"\u30b5\u30f3\u30d7\u30eb\u30fb\u30c6\u30ad\u30b9\u30c8  \u30b5\u30f3\u30d7\u30eb\u30fb\u30c6\u30ad\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of(u"\u30b5\u30f3\u30d7\u30eb(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of(u"\u6700\u65b0:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of(u"\u30c8\u30b0\u30eb\u30fb\u30dd\u30c3\u30d7\u30a2\u30c3\u30d7"_s)
		}),
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
			$of(u"\u30d5\u30a1\u30a4\u30eb\u30fb\u30c1\u30e5\u30fc\u30b6\u30fb\u30c0\u30a4\u30a2\u30ed\u30b0\u3092\u7d42\u4e86\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of(u"\u958b\u304f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s),
			$of(u"\u9078\u629e\u3057\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u3092\u958b\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of(u"\u6c4e\u7528\u30d5\u30a1\u30a4\u30eb"_s)
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
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306e\u8a73\u7d30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesListAccessibleName"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u30fb\u30ea\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\u30d8\u30eb\u30d7(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"FileChooser\u306e\u30d8\u30eb\u30d7\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0\u306e\u4f5c\u6210\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3002\n\n\u6307\u5b9a\u3057\u305f\u30d1\u30b9\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\u958b\u304f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\u9078\u629e\u3057\u305f\u30d5\u30a1\u30a4\u30eb\u3092\u958b\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\u958b\u304f"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.other.newFolder"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.other.newFolder.subsequent"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0.{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameError.textAndMnemonic"_s),
			$of(u"{0}\u306e\u540d\u524d\u3092\u5909\u66f4\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorFileExists.textAndMnemonic"_s),
			$of(u"{0}\u306e\u540d\u524d\u3092\u5909\u66f4\u3067\u304d\u307e\u305b\u3093: \u6307\u5b9a\u3057\u305f\u540d\u524d\u306e\u30d5\u30a1\u30a4\u30eb\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059\u3002\u5225\u306e\u30d5\u30a1\u30a4\u30eb\u540d\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorTitle.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30d5\u30a9\u30eb\u30c0\u306e\u540d\u524d\u5909\u66f4\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\u9078\u629e\u3057\u305f\u30d5\u30a1\u30a4\u30eb\u3092\u4fdd\u5b58\u3057\u307e\u3059"_s)
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
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306e\u30ea\u30b9\u30c8\u3092\u66f4\u65b0\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder.subsequent"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of(u"\u53c2\u7167..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"\u30ea\u30bb\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of(u"\u554f\u5408\u305b\u306e\u5b9f\u884c"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of(u"\u9589\u3058\u308b"_s)
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
			$of(u"\u5fa9\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of(u"\u9589\u3058\u308b(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of(u"\u9589\u3058\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of(u"\u30a2\u30a4\u30b3\u30f3\u5316"_s)
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
			$of(u"\u5fa9\u5143(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of(u"\u30b5\u30a4\u30ba(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"\u691c\u7d22\u7528\u306e\u7d22\u5f15\u3067\u3059\u3002\u691c\u7d22\u3059\u308b\u30ad\u30fc\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044:"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of(u"\u5165\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of(u"\u30e1\u30c3\u30bb\u30fc\u30b8"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of(u"\u3044\u3044\u3048(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u9078\u629e"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of(u"\u306f\u3044(&Y)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of(u"\u4e2d\u6b62(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of(u"\u5370\u5237\u306e\u4e2d\u6b62"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of(u"\u5370\u5237\u3092\u4e2d\u6b62\u3057\u3066\u3044\u307e\u3059..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of(u"\u5370\u5237\u4e2d..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of(u"\u30da\u30fc\u30b8{0}\u3092\u5370\u5237\u3057\u307e\u3057\u305f..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of(u"\u5370\u5237\u3092\u4e2d\u6b62\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of(u"\u5370\u5237\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of(u"\u9032\u884c\u4e2d..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of(u"\u5de6\u30dc\u30bf\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of(u"\u53f3\u30dc\u30bf\u30f3"_s)
		})
	});
}

basic_ja::basic_ja() {
}

$Class* basic_ja::load$($String* name, bool initialize) {
	$loadClass(basic_ja, name, initialize, &_basic_ja_ClassInfo_, allocate$basic_ja);
	return class$;
}

$Class* basic_ja::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com