#include <javax/swing/plaf/multi/MultiFileChooserUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileView = ::javax::swing::filechooser::FileView;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiFileChooserUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiFileChooserUI, uis)},
	{}
};

$MethodInfo _MultiFileChooserUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiFileChooserUI::*)()>(&MultiFileChooserUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiFileChooserUI::createUI))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"getAcceptAllFileFilter", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDialogTitle", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiFileChooserUI",
	"javax.swing.plaf.FileChooserUI",
	nullptr,
	_MultiFileChooserUI_FieldInfo_,
	_MultiFileChooserUI_MethodInfo_
};

$Object* allocate$MultiFileChooserUI($Class* clazz) {
	return $of($alloc(MultiFileChooserUI));
}

void MultiFileChooserUI::init$() {
	$FileChooserUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiFileChooserUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

$FileFilter* MultiFileChooserUI::getAcceptAllFileFilter($JFileChooser* a) {
	$var($FileFilter, returnValue, $nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(0))))))->getAcceptAllFileFilter(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(i))))))->getAcceptAllFileFilter(a);
	}
	return returnValue;
}

$FileView* MultiFileChooserUI::getFileView($JFileChooser* a) {
	$var($FileView, returnValue, $nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(0))))))->getFileView(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(i))))))->getFileView(a);
	}
	return returnValue;
}

$String* MultiFileChooserUI::getApproveButtonText($JFileChooser* a) {
	$var($String, returnValue, $nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(0))))))->getApproveButtonText(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(i))))))->getApproveButtonText(a);
	}
	return returnValue;
}

$String* MultiFileChooserUI::getDialogTitle($JFileChooser* a) {
	$var($String, returnValue, $nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(0))))))->getDialogTitle(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(i))))))->getDialogTitle(a);
	}
	return returnValue;
}

void MultiFileChooserUI::rescanCurrentDirectory($JFileChooser* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(i))))))->rescanCurrentDirectory(a);
	}
}

void MultiFileChooserUI::ensureFileIsVisible($JFileChooser* a, $File* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($FileChooserUI, $($nc(this->uis)->elementAt(i))))))->ensureFileIsVisible(a, b);
	}
}

bool MultiFileChooserUI::contains($JComponent* a, int32_t b, int32_t c) {
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiFileChooserUI::update($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiFileChooserUI::createUI($JComponent* a) {
	$init(MultiFileChooserUI);
	$var(MultiFileChooserUI, mui, $new(MultiFileChooserUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiFileChooserUI::installUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiFileChooserUI::uninstallUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiFileChooserUI::paint($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiFileChooserUI::getPreferredSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiFileChooserUI::getMinimumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiFileChooserUI::getMaximumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiFileChooserUI::getAccessibleChildrenCount($JComponent* a) {
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiFileChooserUI::getAccessibleChild($JComponent* a, int32_t b) {
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiFileChooserUI::MultiFileChooserUI() {
}

$Class* MultiFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(MultiFileChooserUI, name, initialize, &_MultiFileChooserUI_ClassInfo_, allocate$MultiFileChooserUI);
	return class$;
}

$Class* MultiFileChooserUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax