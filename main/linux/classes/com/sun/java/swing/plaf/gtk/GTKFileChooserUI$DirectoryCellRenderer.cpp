#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryCellRenderer.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI$DirectoryCellRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$DirectoryCellRenderer, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$DirectoryCellRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(GTKFileChooserUI$DirectoryCellRenderer::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$DirectoryCellRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$DirectoryCellRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryCellRenderer", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DirectoryCellRenderer", $PROTECTED},
	{}
};

$ClassInfo _GTKFileChooserUI$DirectoryCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryCellRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_GTKFileChooserUI$DirectoryCellRenderer_FieldInfo_,
	_GTKFileChooserUI$DirectoryCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$DirectoryCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$DirectoryCellRenderer($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$DirectoryCellRenderer));
}

void GTKFileChooserUI$DirectoryCellRenderer::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* GTKFileChooserUI$DirectoryCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (this->this$0->showDirectoryIcons) {
		setIcon($($nc($(this->this$0->getFileChooser()))->getIcon($cast($File, value))));
		setText($($nc($(this->this$0->getFileChooser()))->getName($cast($File, value))));
	} else {
		setText($$str({$($nc($(this->this$0->getFileChooser()))->getName($cast($File, value))), "/"_s}));
	}
	return this;
}

GTKFileChooserUI$DirectoryCellRenderer::GTKFileChooserUI$DirectoryCellRenderer() {
}

$Class* GTKFileChooserUI$DirectoryCellRenderer::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$DirectoryCellRenderer, name, initialize, &_GTKFileChooserUI$DirectoryCellRenderer_ClassInfo_, allocate$GTKFileChooserUI$DirectoryCellRenderer);
	return class$;
}

$Class* GTKFileChooserUI$DirectoryCellRenderer::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com