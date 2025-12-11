#include <javax/swing/JFileChooser$FCHierarchyListener.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/HierarchyListener.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <jcpp.h>

#undef PARENT_CHANGED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;

namespace javax {
	namespace swing {

$FieldInfo _JFileChooser$FCHierarchyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooser$FCHierarchyListener, this$0)},
	{}
};

$MethodInfo _JFileChooser$FCHierarchyListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PRIVATE, $method(static_cast<void(JFileChooser$FCHierarchyListener::*)($JFileChooser*)>(&JFileChooser$FCHierarchyListener::init$))},
	{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFileChooser$FCHierarchyListener_InnerClassesInfo_[] = {
	{"javax.swing.JFileChooser$FCHierarchyListener", "javax.swing.JFileChooser", "FCHierarchyListener", $PRIVATE},
	{}
};

$ClassInfo _JFileChooser$FCHierarchyListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFileChooser$FCHierarchyListener",
	"java.lang.Object",
	"java.awt.event.HierarchyListener,java.io.Serializable",
	_JFileChooser$FCHierarchyListener_FieldInfo_,
	_JFileChooser$FCHierarchyListener_MethodInfo_,
	nullptr,
	nullptr,
	_JFileChooser$FCHierarchyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFileChooser"
};

$Object* allocate$JFileChooser$FCHierarchyListener($Class* clazz) {
	return $of($alloc(JFileChooser$FCHierarchyListener));
}

int32_t JFileChooser$FCHierarchyListener::hashCode() {
	 return this->$HierarchyListener::hashCode();
}

bool JFileChooser$FCHierarchyListener::equals(Object$* arg0) {
	 return this->$HierarchyListener::equals(arg0);
}

$Object* JFileChooser$FCHierarchyListener::clone() {
	 return this->$HierarchyListener::clone();
}

$String* JFileChooser$FCHierarchyListener::toString() {
	 return this->$HierarchyListener::toString();
}

void JFileChooser$FCHierarchyListener::finalize() {
	this->$HierarchyListener::finalize();
}

void JFileChooser$FCHierarchyListener::init$($JFileChooser* this$0) {
	$set(this, this$0, this$0);
}

void JFileChooser$FCHierarchyListener::hierarchyChanged($HierarchyEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)($nc(e)->getChangeFlags() & (uint64_t)(int64_t)$HierarchyEvent::PARENT_CHANGED)) == $HierarchyEvent::PARENT_CHANGED) {
		$var($JFileChooser, fc, this->this$0);
		$var($JRootPane, rootPane, $SwingUtilities::getRootPane(fc));
		if (rootPane != nullptr) {
			rootPane->setDefaultButton($($nc($($cast($FileChooserUI, $nc(fc)->getUI())))->getDefaultButton(fc)));
		}
	}
}

JFileChooser$FCHierarchyListener::JFileChooser$FCHierarchyListener() {
}

$Class* JFileChooser$FCHierarchyListener::load$($String* name, bool initialize) {
	$loadClass(JFileChooser$FCHierarchyListener, name, initialize, &_JFileChooser$FCHierarchyListener_ClassInfo_, allocate$JFileChooser$FCHierarchyListener);
	return class$;
}

$Class* JFileChooser$FCHierarchyListener::class$ = nullptr;

	} // swing
} // javax