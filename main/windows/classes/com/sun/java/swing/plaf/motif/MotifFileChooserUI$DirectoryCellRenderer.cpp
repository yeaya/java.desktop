#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$DirectoryCellRenderer.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
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

$FieldInfo _MotifFileChooserUI$DirectoryCellRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$DirectoryCellRenderer, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$DirectoryCellRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifFileChooserUI$DirectoryCellRenderer::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$DirectoryCellRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _MotifFileChooserUI$DirectoryCellRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$DirectoryCellRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "DirectoryCellRenderer", $PROTECTED},
	{}
};

$ClassInfo _MotifFileChooserUI$DirectoryCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$DirectoryCellRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_MotifFileChooserUI$DirectoryCellRenderer_FieldInfo_,
	_MotifFileChooserUI$DirectoryCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MotifFileChooserUI$DirectoryCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$DirectoryCellRenderer($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$DirectoryCellRenderer));
}

void MotifFileChooserUI$DirectoryCellRenderer::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* MotifFileChooserUI$DirectoryCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	setText($($nc($(this->this$0->getFileChooser()))->getName($cast($File, value))));
	setInheritsPopupMenu(true);
	return this;
}

MotifFileChooserUI$DirectoryCellRenderer::MotifFileChooserUI$DirectoryCellRenderer() {
}

$Class* MotifFileChooserUI$DirectoryCellRenderer::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$DirectoryCellRenderer, name, initialize, &_MotifFileChooserUI$DirectoryCellRenderer_ClassInfo_, allocate$MotifFileChooserUI$DirectoryCellRenderer);
	return class$;
}

$Class* MotifFileChooserUI$DirectoryCellRenderer::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com