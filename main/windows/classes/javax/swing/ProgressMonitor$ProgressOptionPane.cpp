#include <javax/swing/ProgressMonitor$ProgressOptionPane.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane$1.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane$2.h>
#include <javax/swing/ProgressMonitor.h>
#include <javax/swing/SwingUtilities$SharedOwnerFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef DEFAULT_OPTION
#undef INFORMATION_MESSAGE

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;
using $ProgressMonitor$ProgressOptionPane$1 = ::javax::swing::ProgressMonitor$ProgressOptionPane$1;
using $ProgressMonitor$ProgressOptionPane$2 = ::javax::swing::ProgressMonitor$ProgressOptionPane$2;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingUtilities$SharedOwnerFrame = ::javax::swing::SwingUtilities$SharedOwnerFrame;

namespace javax {
	namespace swing {

$FieldInfo _ProgressMonitor$ProgressOptionPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ProgressMonitor;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$ProgressOptionPane, this$0)},
	{}
};

$MethodInfo _ProgressMonitor$ProgressOptionPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ProgressMonitor;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(ProgressMonitor$ProgressOptionPane::*)($ProgressMonitor*,Object$*)>(&ProgressMonitor$ProgressOptionPane::init$))},
	{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JDialog;", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAccessibleJOptionPane", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(ProgressMonitor$ProgressOptionPane::*)()>(&ProgressMonitor$ProgressOptionPane::getAccessibleJOptionPane))},
	{"getMaxCharactersPerLineCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProgressMonitor$ProgressOptionPane_InnerClassesInfo_[] = {
	{"javax.swing.ProgressMonitor$ProgressOptionPane", "javax.swing.ProgressMonitor", "ProgressOptionPane", $PRIVATE},
	{"javax.swing.ProgressMonitor$ProgressOptionPane$2", nullptr, nullptr, 0},
	{"javax.swing.ProgressMonitor$ProgressOptionPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProgressMonitor$ProgressOptionPane_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ProgressMonitor$ProgressOptionPane",
	"javax.swing.JOptionPane",
	nullptr,
	_ProgressMonitor$ProgressOptionPane_FieldInfo_,
	_ProgressMonitor$ProgressOptionPane_MethodInfo_,
	nullptr,
	nullptr,
	_ProgressMonitor$ProgressOptionPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ProgressMonitor"
};

$Object* allocate$ProgressMonitor$ProgressOptionPane($Class* clazz) {
	return $of($alloc(ProgressMonitor$ProgressOptionPane));
}

void ProgressMonitor$ProgressOptionPane::init$($ProgressMonitor* this$0, Object$* messageList) {
	$set(this, this$0, this$0);
	$JOptionPane::init$(messageList, $JOptionPane::INFORMATION_MESSAGE, $JOptionPane::DEFAULT_OPTION, nullptr, this$0->cancelOption, nullptr);
}

int32_t ProgressMonitor$ProgressOptionPane::getMaxCharactersPerLineCount() {
	return 60;
}

$JDialog* ProgressMonitor$ProgressOptionPane::createDialog($Component* parentComponent, $String* title) {
	$var($JDialog, dialog, nullptr);
	$var($Window, window, $JOptionPane::getWindowForComponent(parentComponent));
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($JDialog, $cast($Frame, window), title, false));
	} else {
		$assign(dialog, $new($JDialog, $cast($Dialog, window), title, false));
	}
	if ($instanceOf($SwingUtilities$SharedOwnerFrame, window)) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		$nc(dialog)->addWindowListener(ownerShutdownListener);
	}
	$var($Container, contentPane, $nc(dialog)->getContentPane());
	$nc(contentPane)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	contentPane->add(static_cast<$Component*>(this), $of($BorderLayout::CENTER));
	dialog->pack();
	dialog->setLocationRelativeTo(parentComponent);
	dialog->addWindowListener($$new($ProgressMonitor$ProgressOptionPane$1, this));
	addPropertyChangeListener($$new($ProgressMonitor$ProgressOptionPane$2, this, dialog));
	return dialog;
}

$AccessibleContext* ProgressMonitor$ProgressOptionPane::getAccessibleContext() {
	return this->this$0->getAccessibleContext();
}

$AccessibleContext* ProgressMonitor$ProgressOptionPane::getAccessibleJOptionPane() {
	return $JOptionPane::getAccessibleContext();
}

ProgressMonitor$ProgressOptionPane::ProgressMonitor$ProgressOptionPane() {
}

$Class* ProgressMonitor$ProgressOptionPane::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitor$ProgressOptionPane, name, initialize, &_ProgressMonitor$ProgressOptionPane_ClassInfo_, allocate$ProgressMonitor$ProgressOptionPane);
	return class$;
}

$Class* ProgressMonitor$ProgressOptionPane::class$ = nullptr;

	} // swing
} // javax