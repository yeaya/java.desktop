#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL.h>

#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL$1.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKLookAndFeel$WeakPCL$1 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$WeakPCL$1;
using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKLookAndFeel$WeakPCL_FieldInfo_[] = {
	{"kit", "Ljava/awt/Toolkit;", nullptr, $PRIVATE, $field(GTKLookAndFeel$WeakPCL, kit)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKLookAndFeel$WeakPCL, key)},
	{}
};

$MethodInfo _GTKLookAndFeel$WeakPCL_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;Ljava/awt/Toolkit;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GTKLookAndFeel$WeakPCL::*)($GTKLookAndFeel*,$Toolkit*,$String*)>(&GTKLookAndFeel$WeakPCL::init$))},
	{"dispose", "()V", nullptr, 0},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKLookAndFeel$WeakPCL_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "WeakPCL", $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GTKLookAndFeel$WeakPCL_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL",
	"java.lang.ref.WeakReference",
	"java.beans.PropertyChangeListener",
	_GTKLookAndFeel$WeakPCL_FieldInfo_,
	_GTKLookAndFeel$WeakPCL_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_GTKLookAndFeel$WeakPCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
};

$Object* allocate$GTKLookAndFeel$WeakPCL($Class* clazz) {
	return $of($alloc(GTKLookAndFeel$WeakPCL));
}

$Object* GTKLookAndFeel$WeakPCL::clone() {
	 return this->$WeakReference::clone();
}

int32_t GTKLookAndFeel$WeakPCL::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool GTKLookAndFeel$WeakPCL::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* GTKLookAndFeel$WeakPCL::toString() {
	 return this->$WeakReference::toString();
}

void GTKLookAndFeel$WeakPCL::finalize() {
	this->$WeakReference::finalize();
}

void GTKLookAndFeel$WeakPCL::init$($GTKLookAndFeel* target, $Toolkit* kit, $String* key) {
	$init($GTKLookAndFeel);
	$WeakReference::init$(target, $GTKLookAndFeel::queue);
	$set(this, kit, kit);
	$set(this, key, key);
}

$String* GTKLookAndFeel$WeakPCL::getKey() {
	return this->key;
}

void GTKLookAndFeel$WeakPCL::propertyChange($PropertyChangeEvent* pce) {
	$useLocalCurrentObjectStackCache();
	$var($GTKLookAndFeel, lnf, $cast($GTKLookAndFeel, get()));
	if (lnf == nullptr || !$equals($UIManager::getLookAndFeel(), lnf)) {
		dispose();
	} else {
		$SwingUtilities::invokeLater($$new($GTKLookAndFeel$WeakPCL$1, this, pce, lnf));
	}
}

void GTKLookAndFeel$WeakPCL::dispose() {
	$nc(this->kit)->removePropertyChangeListener(this->key, this);
}

GTKLookAndFeel$WeakPCL::GTKLookAndFeel$WeakPCL() {
}

$Class* GTKLookAndFeel$WeakPCL::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$WeakPCL, name, initialize, &_GTKLookAndFeel$WeakPCL_ClassInfo_, allocate$GTKLookAndFeel$WeakPCL);
	return class$;
}

$Class* GTKLookAndFeel$WeakPCL::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com