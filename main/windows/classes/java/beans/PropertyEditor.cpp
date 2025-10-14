#include <java/beans/PropertyEditor.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _PropertyEditor_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isPaintable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PropertyEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.PropertyEditor",
	nullptr,
	nullptr,
	nullptr,
	_PropertyEditor_MethodInfo_
};

$Object* allocate$PropertyEditor($Class* clazz) {
	return $of($alloc(PropertyEditor));
}

$Class* PropertyEditor::load$($String* name, bool initialize) {
	$loadClass(PropertyEditor, name, initialize, &_PropertyEditor_ClassInfo_, allocate$PropertyEditor);
	return class$;
}

$Class* PropertyEditor::class$ = nullptr;

	} // beans
} // java