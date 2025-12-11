#include <javax/swing/JFileChooser$WeakPCL.h>

#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace javax {
	namespace swing {

$FieldInfo _JFileChooser$WeakPCL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JFileChooser$WeakPCL, $assertionsDisabled)},
	{"jfcRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JFileChooser;>;", 0, $field(JFileChooser$WeakPCL, jfcRef)},
	{}
};

$MethodInfo _JFileChooser$WeakPCL_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser$WeakPCL::*)($JFileChooser*)>(&JFileChooser$WeakPCL::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFileChooser$WeakPCL_InnerClassesInfo_[] = {
	{"javax.swing.JFileChooser$WeakPCL", "javax.swing.JFileChooser", "WeakPCL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JFileChooser$WeakPCL_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFileChooser$WeakPCL",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_JFileChooser$WeakPCL_FieldInfo_,
	_JFileChooser$WeakPCL_MethodInfo_,
	nullptr,
	nullptr,
	_JFileChooser$WeakPCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFileChooser"
};

$Object* allocate$JFileChooser$WeakPCL($Class* clazz) {
	return $of($alloc(JFileChooser$WeakPCL));
}

bool JFileChooser$WeakPCL::$assertionsDisabled = false;

void JFileChooser$WeakPCL::init$($JFileChooser* jfc) {
	$set(this, jfcRef, $new($WeakReference, jfc));
}

void JFileChooser$WeakPCL::propertyChange($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (!JFileChooser$WeakPCL::$assertionsDisabled && !$nc($($nc(ev)->getPropertyName()))->equals("awt.file.showHiddenFiles"_s)) {
		$throwNew($AssertionError);
	}
	$var($JFileChooser, jfc, $cast($JFileChooser, $nc(this->jfcRef)->get()));
	if (jfc == nullptr) {
		$nc($($Toolkit::getDefaultToolkit()))->removePropertyChangeListener("awt.file.showHiddenFiles"_s, this);
	} else {
		bool oldValue = $nc(jfc)->useFileHiding;
		jfc->useFileHiding = !$nc(($cast($Boolean, $($nc(ev)->getNewValue()))))->booleanValue();
		jfc->firePropertyChange("FileHidingChanged"_s, oldValue, jfc->useFileHiding);
	}
}

void clinit$JFileChooser$WeakPCL($Class* class$) {
	$load($JFileChooser);
	JFileChooser$WeakPCL::$assertionsDisabled = !$JFileChooser::class$->desiredAssertionStatus();
}

JFileChooser$WeakPCL::JFileChooser$WeakPCL() {
}

$Class* JFileChooser$WeakPCL::load$($String* name, bool initialize) {
	$loadClass(JFileChooser$WeakPCL, name, initialize, &_JFileChooser$WeakPCL_ClassInfo_, clinit$JFileChooser$WeakPCL, allocate$JFileChooser$WeakPCL);
	return class$;
}

$Class* JFileChooser$WeakPCL::class$ = nullptr;

	} // swing
} // javax