#include <com/sun/swing/internal/plaf/basic/resources/basic_ko.h>

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

$MethodInfo _basic_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(basic_ko::*)()>(&basic_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _basic_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.basic.resources.basic_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_basic_ko_MethodInfo_
};

$Object* allocate$basic_ko($Class* clazz) {
	return $of($alloc(basic_ko));
}

void basic_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of(u"\ub204\ub974\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of(u"\ucd94\uac00"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of(u"\uc0ad\uc81c"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of(u"\uc7ac\uc2e4\ud589"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of(u"\uc2a4\ud0c0\uc77c \ubcc0\uacbd"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of(u"\uc2e4\ud589 \ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of(u"\uc7ac\uc2e4\ud589"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of(u"\uc2e4\ud589 \ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cancel.textAndMnemonic"_s),
			$of(u"\ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmyk.textAndMnemonic"_s),
			$of("C&MYK"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykAlpha.textAndMnemonic"_s),
			$of(u"\uc54c\ud30c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykBlack.textAndMnemonic"_s),
			$of(u"\uac80\uc815\uc0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykCyan.textAndMnemonic"_s),
			$of(u"\uccad\ub85d\uc0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykMagenta.textAndMnemonic"_s),
			$of(u"\uc9c4\ud64d\uc0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykYellow.textAndMnemonic"_s),
			$of(u"\ub178\ub780\uc0c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsl.textAndMnemonic"_s),
			$of("HSL(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslHue.textAndMnemonic"_s),
			$of(u"\uc0c9\uc870"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslLightness.textAndMnemonic"_s),
			$of(u"\ubc1d\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslSaturation.textAndMnemonic"_s),
			$of(u"\ucc44\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslTransparency.textAndMnemonic"_s),
			$of(u"\ud22c\uba85"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsv.textAndMnemonic"_s),
			$of("HSV(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvHue.textAndMnemonic"_s),
			$of(u"\uc0c9\uc870"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvSaturation.textAndMnemonic"_s),
			$of(u"\ucc44\ub3c4"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvTransparency.textAndMnemonic"_s),
			$of(u"\ud22c\uba85"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvValue.textAndMnemonic"_s),
			$of(u"\uac12"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.ok.textAndMnemonic"_s),
			$of(u"\ud655\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of(u"\ubbf8\ub9ac\ubcf4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"\uc7ac\uc124\uc815(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("RGB(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbAlpha.textAndMnemonic"_s),
			$of(u"\uc54c\ud30c"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of(u"\ud30c\ub780\uc0c9(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of(u"\ub179\uc0c9(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbHexCode.textAndMnemonic"_s),
			$of(u"\uc0c9\uc0c1 \ucf54\ub4dc(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of(u"\ube68\uac04\uc0c9(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of(u"\uc0d8\ud50c \ud14d\uc2a4\ud2b8  \uc0d8\ud50c \ud14d\uc2a4\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of(u"\uacac\ubcf8(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of(u"\ucd5c\uadfc \ubaa9\ub85d:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of("togglePopup"_s)
		}),
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
			$of(u"\ud30c\uc77c \uc120\ud0dd\uae30 \ub300\ud654\uc0c1\uc790 \uc911\ub2e8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of(u"\ub514\ub809\ud1a0\ub9ac"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of(u"\uc5f4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc120\ud0dd\ub41c \ub514\ub809\ud1a0\ub9ac \uc5f4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of(u"\uc77c\ubc18 \ud30c\uc77c"_s)
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
			$of(u"\ud30c\uc77c \uc138\ubd80\uc815\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesListAccessibleName"_s),
			$of(u"\ud30c\uc77c \ubaa9\ub85d"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"\ub3c4\uc6c0\ub9d0(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of(u"FileChooser \ub3c4\uc6c0\ub9d0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of(u"\uc0c8 \ud3f4\ub354\ub97c \uc0dd\uc131\ud558\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4.\n\n\uc2dc\uc2a4\ud15c\uc5d0\uc11c \uc9c0\uc815\ub41c \uacbd\ub85c\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s),
			$of(u"\ud3f4\ub354\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"\uc5f4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc120\ud0dd\ub41c \ud30c\uc77c \uc5f4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"\uc5f4\uae30"_s)
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
			$of(u"{0}\uc758 \uc774\ub984\uc744 \ubc14\uafc0 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorFileExists.textAndMnemonic"_s),
			$of(u"{0}\uc758 \uc774\ub984\uc744 \ubc14\uafc0 \uc218 \uc5c6\uc74c: \uc9c0\uc815\ud55c \uc774\ub984\uc744 \uc0ac\uc6a9\ud558\ub294 \ud30c\uc77c\uc774 \uc874\uc7ac\ud569\ub2c8\ub2e4. \ub2e4\ub978 \ud30c\uc77c \uc774\ub984\uc744 \uc9c0\uc815\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorTitle.textAndMnemonic"_s),
			$of(u"\ud30c\uc77c \ub610\ub294 \ud3f4\ub354 \uc774\ub984 \ubc14\uafb8\ub294 \uc911 \uc624\ub958 \ubc1c\uc0dd"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"\uc800\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc120\ud0dd\ub41c \ud30c\uc77c \uc800\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"\uc800\uc7a5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"\uc5c5\ub370\uc774\ud2b8(&U)"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of(u"\ub514\ub809\ud1a0\ub9ac \ubaa9\ub85d \uc5c5\ub370\uc774\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder"_s),
			$of(u"\uc0c8 \ud3f4\ub354"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder.subsequent"_s),
			$of(u"\uc0c8 \ud3f4\ub354({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of(u"\ucc3e\uc544\ubcf4\uae30..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"\uc7ac\uc124\uc815"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of(u"\uc9c8\uc758 \uc81c\ucd9c"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of(u"\ub2eb\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.iconButtonToolTip"_s),
			$of(u"\ucd5c\uc18c\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.maxButtonToolTip"_s),
			$of(u"\ucd5c\ub300\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.restoreButtonToolTip"_s),
			$of(u"\ubcf5\uc6d0"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of(u"\ub2eb\uae30(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of(u"\ub2eb\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of(u"\uc544\uc774\ucf58\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s),
			$of(u"\ucd5c\ub300\ud654(&X)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButtonAccessibleName"_s),
			$of(u"\ucd5c\ub300\ud654"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s),
			$of(u"\ucd5c\uc18c\ud654(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.moveButton.textAndMnemonic"_s),
			$of(u"\uc774\ub3d9(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of(u"\ubcf5\uc6d0(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of(u"\ud06c\uae30(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"\ub2e4\uc74c\uc740 \uac80\uc0c9 \uac00\ub2a5\ud55c \uc778\ub371\uc2a4\uc785\ub2c8\ub2e4. \uac80\uc0c9 \ud0a4\uc6cc\ub4dc \uc785\ub825:"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of(u"\ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of(u"\uc785\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of(u"\uba54\uc2dc\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of(u"\uc544\ub2c8\uc624(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of(u"\ud655\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"\uc635\uc158 \uc120\ud0dd"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of(u"\uc608(&Y)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of(u"\uc911\ub2e8(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of(u"\uc778\uc1c4 \uc911\ub2e8"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of(u"\uc778\uc1c4 \uc911\ub2e8 \uc911..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of(u"\uc778\uc1c4 \uc9c4\ud589 \uc911..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of(u"\uc778\uc1c4\ub41c \ud398\uc774\uc9c0 {0}..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of(u"\uc778\uc1c4(\uc911\ub2e8 \uc911)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of(u"\uc778\uc1c4"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of(u"\uc9c4\ud589..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of(u"\uc67c\ucabd \ub2e8\ucd94"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of(u"\uc624\ub978\ucabd \ub2e8\ucd94"_s)
		})
	});
}

basic_ko::basic_ko() {
}

$Class* basic_ko::load$($String* name, bool initialize) {
	$loadClass(basic_ko, name, initialize, &_basic_ko_ClassInfo_, allocate$basic_ko);
	return class$;
}

$Class* basic_ko::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com