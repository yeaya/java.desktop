#include <javax/swing/ColorTracker.h>

#include <java/awt/Color.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/JColorChooser.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;

namespace javax {
	namespace swing {

$FieldInfo _ColorTracker_FieldInfo_[] = {
	{"chooser", "Ljavax/swing/JColorChooser;", nullptr, 0, $field(ColorTracker, chooser)},
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(ColorTracker, color)},
	{}
};

$MethodInfo _ColorTracker_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(ColorTracker::*)($JColorChooser*)>(&ColorTracker::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorTracker_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ColorTracker",
	"java.lang.Object",
	"java.awt.event.ActionListener,java.io.Serializable",
	_ColorTracker_FieldInfo_,
	_ColorTracker_MethodInfo_
};

$Object* allocate$ColorTracker($Class* clazz) {
	return $of($alloc(ColorTracker));
}

int32_t ColorTracker::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool ColorTracker::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* ColorTracker::clone() {
	 return this->$ActionListener::clone();
}

$String* ColorTracker::toString() {
	 return this->$ActionListener::toString();
}

void ColorTracker::finalize() {
	this->$ActionListener::finalize();
}

void ColorTracker::init$($JColorChooser* c) {
	$set(this, chooser, c);
}

void ColorTracker::actionPerformed($ActionEvent* e) {
	$set(this, color, $nc(this->chooser)->getColor());
}

$Color* ColorTracker::getColor() {
	return this->color;
}

ColorTracker::ColorTracker() {
}

$Class* ColorTracker::load$($String* name, bool initialize) {
	$loadClass(ColorTracker, name, initialize, &_ColorTracker_ClassInfo_, allocate$ColorTracker);
	return class$;
}

$Class* ColorTracker::class$ = nullptr;

	} // swing
} // javax