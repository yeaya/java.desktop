#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$WindowsTreeCellRenderer.h>

#include <com/sun/java/swing/plaf/windows/WindowsTreeUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $WindowsTreeUI = ::com::sun::java::swing::plaf::windows::WindowsTreeUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTree = ::javax::swing::JTree;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTreeUI$WindowsTreeCellRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsTreeUI$WindowsTreeCellRenderer, this$0)},
	{}
};

$MethodInfo _WindowsTreeUI$WindowsTreeCellRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTreeUI$WindowsTreeCellRenderer::*)($WindowsTreeUI*)>(&WindowsTreeUI$WindowsTreeCellRenderer::init$))},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTreeUI$WindowsTreeCellRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTreeUI$WindowsTreeCellRenderer", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "WindowsTreeCellRenderer", $PUBLIC},
	{}
};

$ClassInfo _WindowsTreeUI$WindowsTreeCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTreeUI$WindowsTreeCellRenderer",
	"javax.swing.tree.DefaultTreeCellRenderer",
	nullptr,
	_WindowsTreeUI$WindowsTreeCellRenderer_FieldInfo_,
	_WindowsTreeUI$WindowsTreeCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTreeUI$WindowsTreeCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTreeUI"
};

$Object* allocate$WindowsTreeUI$WindowsTreeCellRenderer($Class* clazz) {
	return $of($alloc(WindowsTreeUI$WindowsTreeCellRenderer));
}

void WindowsTreeUI$WindowsTreeCellRenderer::init$($WindowsTreeUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTreeCellRenderer::init$();
}

$Component* WindowsTreeUI$WindowsTreeCellRenderer::getTreeCellRendererComponent($JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	$DefaultTreeCellRenderer::getTreeCellRendererComponent(tree, value, sel, expanded, leaf, row, hasFocus);
	if (!$nc(tree)->isEnabled()) {
		setEnabled(false);
		if (leaf) {
			setDisabledIcon($(getLeafIcon()));
		} else if (sel) {
			setDisabledIcon($(getOpenIcon()));
		} else {
			setDisabledIcon($(getClosedIcon()));
		}
	} else {
		setEnabled(true);
		if (leaf) {
			setIcon($(getLeafIcon()));
		} else if (sel) {
			setIcon($(getOpenIcon()));
		} else {
			setIcon($(getClosedIcon()));
		}
	}
	return this;
}

WindowsTreeUI$WindowsTreeCellRenderer::WindowsTreeUI$WindowsTreeCellRenderer() {
}

$Class* WindowsTreeUI$WindowsTreeCellRenderer::load$($String* name, bool initialize) {
	$loadClass(WindowsTreeUI$WindowsTreeCellRenderer, name, initialize, &_WindowsTreeUI$WindowsTreeCellRenderer_ClassInfo_, allocate$WindowsTreeUI$WindowsTreeCellRenderer);
	return class$;
}

$Class* WindowsTreeUI$WindowsTreeCellRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com