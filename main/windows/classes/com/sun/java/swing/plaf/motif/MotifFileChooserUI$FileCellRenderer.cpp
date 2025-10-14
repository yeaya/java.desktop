#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FileCellRenderer.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$FileCellRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$FileCellRenderer, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$FileCellRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifFileChooserUI$FileCellRenderer::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$FileCellRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _MotifFileChooserUI$FileCellRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FileCellRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FileCellRenderer", $PROTECTED},
	{}
};

$ClassInfo _MotifFileChooserUI$FileCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FileCellRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_MotifFileChooserUI$FileCellRenderer_FieldInfo_,
	_MotifFileChooserUI$FileCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MotifFileChooserUI$FileCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$FileCellRenderer($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$FileCellRenderer));
}

void MotifFileChooserUI$FileCellRenderer::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* MotifFileChooserUI$FileCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	setText($($nc($(this->this$0->getFileChooser()))->getName($cast($File, value))));
	setInheritsPopupMenu(true);
	return this;
}

MotifFileChooserUI$FileCellRenderer::MotifFileChooserUI$FileCellRenderer() {
}

$Class* MotifFileChooserUI$FileCellRenderer::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$FileCellRenderer, name, initialize, &_MotifFileChooserUI$FileCellRenderer_ClassInfo_, allocate$MotifFileChooserUI$FileCellRenderer);
	return class$;
}

$Class* MotifFileChooserUI$FileCellRenderer::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com