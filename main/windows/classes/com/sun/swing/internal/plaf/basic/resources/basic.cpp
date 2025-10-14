#include <com/sun/swing/internal/plaf/basic/resources/basic.h>

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

$MethodInfo _basic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(basic::*)()>(&basic::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _basic_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.basic.resources.basic",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_basic_MethodInfo_
};

$Object* allocate$basic($Class* clazz) {
	return $of($alloc(basic));
}

void basic::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* basic::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of("click"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of("addition"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of("deletion"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of("Redo"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of("style change"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of("Undo"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of("Redo"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of("Undo"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cancel.textAndMnemonic"_s),
			$of("Cancel"_s)
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
			$of("Black"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykCyan.textAndMnemonic"_s),
			$of("Cyan"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykMagenta.textAndMnemonic"_s),
			$of("Magenta"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cmykYellow.textAndMnemonic"_s),
			$of("Yellow"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsl.textAndMnemonic"_s),
			$of("HS&L"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslHue.textAndMnemonic"_s),
			$of("Hue"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslLightness.textAndMnemonic"_s),
			$of("Lightness"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslSaturation.textAndMnemonic"_s),
			$of("Saturation"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hslTransparency.textAndMnemonic"_s),
			$of("Transparency"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsv.textAndMnemonic"_s),
			$of("&HSV"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvHue.textAndMnemonic"_s),
			$of("Hue"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvSaturation.textAndMnemonic"_s),
			$of("Saturation"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvTransparency.textAndMnemonic"_s),
			$of("Transparency"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsvValue.textAndMnemonic"_s),
			$of("Value"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.ok.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of("Preview"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of("&Reset"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("R&GB"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbAlpha.textAndMnemonic"_s),
			$of("Alpha"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of("&Blue"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of("Gree&n"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbHexCode.textAndMnemonic"_s),
			$of("&Color Code"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of("Re&d"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of("Sample Text  Sample Text"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of("&Swatches"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of("Recent:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of("togglePopup"_s)
		}),
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
			$of("Abort file chooser dialog"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of("Directory"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of("Open"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButtonToolTip.textAndMnemonic"_s),
			$of("Open selected directory"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of("Generic File"_s)
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
			$of("Files Details"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesListAccessibleName"_s),
			$of("Files List"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of("&Help"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButtonToolTip.textAndMnemonic"_s),
			$of("FileChooser help"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of("Error creating new folder"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExist.textAndMnemonic"_s),
			$of("Unable to create the folder.\n\nThe system cannot find the path specified."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderParentDoesntExistTitle.textAndMnemonic"_s),
			$of("Unable to create folder"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of("Open"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButtonToolTip.textAndMnemonic"_s),
			$of("Open selected file"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of("Open"_s)
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
			$of("Cannot rename {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorFileExists.textAndMnemonic"_s),
			$of("Cannot rename {0}: A file with the name you specified already exists. Specify a different file name."_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.renameErrorTitle.textAndMnemonic"_s),
			$of("Error Renaming File or Folder"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("Save"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButtonToolTip.textAndMnemonic"_s),
			$of("Save selected file"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of("Save"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of("&Update"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButtonToolTip.textAndMnemonic"_s),
			$of("Update directory listing"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder"_s),
			$of("New Folder"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.win32.newFolder.subsequent"_s),
			$of("New Folder ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of("Browse..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of("Reset"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of("Submit Query"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of("Close"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.iconButtonToolTip"_s),
			$of("Minimize"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.maxButtonToolTip"_s),
			$of("Maximize"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.restoreButtonToolTip"_s),
			$of("Restore"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of("&Close"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of("Close"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of("Iconify"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s),
			$of("Ma&ximize"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButtonAccessibleName"_s),
			$of("Maximize"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s),
			$of("Mi&nimize"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.moveButton.textAndMnemonic"_s),
			$of("&Move"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of("&Restore"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of("&Size"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of("This is a searchable index.  Enter search keywords:"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of("Cancel"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of("Input"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of("Message"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of("&No"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of("Select an Option"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of("&Yes"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of("&Abort"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of("Abort Printing"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of("Printing aborting..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of("Printing in progress..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of("Printed page {0}..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of("Printing (Aborting)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of("Printing"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of("Progress..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of("left button"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of("right button"_s)
		})
	});
}

basic::basic() {
}

$Class* basic::load$($String* name, bool initialize) {
	$loadClass(basic, name, initialize, &_basic_ClassInfo_, allocate$basic);
	return class$;
}

$Class* basic::class$ = nullptr;

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com