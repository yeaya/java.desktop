#include <com/sun/beans/finder/PropertyEditorFinder.h>

#include <com/sun/beans/WeakCache.h>
#include <com/sun/beans/editors/BooleanEditor.h>
#include <com/sun/beans/editors/ByteEditor.h>
#include <com/sun/beans/editors/DoubleEditor.h>
#include <com/sun/beans/editors/EnumEditor.h>
#include <com/sun/beans/editors/FloatEditor.h>
#include <com/sun/beans/editors/IntegerEditor.h>
#include <com/sun/beans/editors/LongEditor.h>
#include <com/sun/beans/editors/ShortEditor.h>
#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/beans/PropertyEditor.h>
#include <jcpp.h>

#undef DEFAULT
#undef DEFAULT_NEW
#undef TYPE

using $WeakCache = ::com::sun::beans::WeakCache;
using $BooleanEditor = ::com::sun::beans::editors::BooleanEditor;
using $ByteEditor = ::com::sun::beans::editors::ByteEditor;
using $DoubleEditor = ::com::sun::beans::editors::DoubleEditor;
using $EnumEditor = ::com::sun::beans::editors::EnumEditor;
using $FloatEditor = ::com::sun::beans::editors::FloatEditor;
using $IntegerEditor = ::com::sun::beans::editors::IntegerEditor;
using $LongEditor = ::com::sun::beans::editors::LongEditor;
using $ShortEditor = ::com::sun::beans::editors::ShortEditor;
using $InstanceFinder = ::com::sun::beans::finder::InstanceFinder;
using $PropertyEditor = ::java::beans::PropertyEditor;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _PropertyEditorFinder_FieldInfo_[] = {
	{"DEFAULT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyEditorFinder, DEFAULT)},
	{"DEFAULT_NEW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyEditorFinder, DEFAULT_NEW)},
	{"registry", "Lcom/sun/beans/WeakCache;", "Lcom/sun/beans/WeakCache<Ljava/lang/Class<*>;Ljava/lang/Class<*>;>;", $PRIVATE | $FINAL, $field(PropertyEditorFinder, registry)},
	{}
};

$MethodInfo _PropertyEditorFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PropertyEditorFinder::*)()>(&PropertyEditorFinder::init$))},
	{"find", "(Ljava/lang/Class;)Ljava/beans/PropertyEditor;", "(Ljava/lang/Class<*>;)Ljava/beans/PropertyEditor;", $PUBLIC},
	{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/beans/PropertyEditor;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Ljava/beans/PropertyEditor;", $PROTECTED},
	{"register", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(PropertyEditorFinder::*)($Class*,$Class*)>(&PropertyEditorFinder::register$))},
	{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _PropertyEditorFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.PropertyEditorFinder",
	"com.sun.beans.finder.InstanceFinder",
	nullptr,
	_PropertyEditorFinder_FieldInfo_,
	_PropertyEditorFinder_MethodInfo_,
	"Lcom/sun/beans/finder/InstanceFinder<Ljava/beans/PropertyEditor;>;"
};

$Object* allocate$PropertyEditorFinder($Class* clazz) {
	return $of($alloc(PropertyEditorFinder));
}

$String* PropertyEditorFinder::DEFAULT = nullptr;
$String* PropertyEditorFinder::DEFAULT_NEW = nullptr;

void PropertyEditorFinder::init$() {
	$load($PropertyEditor);
	$InstanceFinder::init$($PropertyEditor::class$, false, "Editor"_s, $$new($StringArray, {PropertyEditorFinder::DEFAULT}));
	$set(this, registry, $new($WeakCache));
	$init($Byte);
	$load($ByteEditor);
	$nc(this->registry)->put($Byte::TYPE, $ByteEditor::class$);
	$init($Short);
	$load($ShortEditor);
	$nc(this->registry)->put($Short::TYPE, $ShortEditor::class$);
	$init($Integer);
	$load($IntegerEditor);
	$nc(this->registry)->put($Integer::TYPE, $IntegerEditor::class$);
	$init($Long);
	$load($LongEditor);
	$nc(this->registry)->put($Long::TYPE, $LongEditor::class$);
	$init($Boolean);
	$load($BooleanEditor);
	$nc(this->registry)->put($Boolean::TYPE, $BooleanEditor::class$);
	$init($Float);
	$load($FloatEditor);
	$nc(this->registry)->put($Float::TYPE, $FloatEditor::class$);
	$init($Double);
	$load($DoubleEditor);
	$nc(this->registry)->put($Double::TYPE, $DoubleEditor::class$);
}

void PropertyEditorFinder::register$($Class* type, $Class* editor) {
	$synchronized(this->registry) {
		$nc(this->registry)->put(type, editor);
	}
}

$Object* PropertyEditorFinder::find($Class* type) {
	$Class* predefined = nullptr;
	$synchronized(this->registry) {
		predefined = $cast($Class, $nc(this->registry)->get(type));
	}
	$var($PropertyEditor, editor, $cast($PropertyEditor, instantiate(predefined, nullptr)));
	if (editor == nullptr) {
		$assign(editor, $cast($PropertyEditor, $InstanceFinder::find(type)));
		if ((editor == nullptr) && (nullptr != $nc(type)->getEnumConstants())) {
			$assign(editor, $new($EnumEditor, type));
		}
	}
	return $of(editor);
}

$Object* PropertyEditorFinder::instantiate($Class* type, $String* prefix, $String* name) {
	return $of($cast($PropertyEditor, $InstanceFinder::instantiate(type, $nc(PropertyEditorFinder::DEFAULT)->equals(prefix) ? PropertyEditorFinder::DEFAULT_NEW : prefix, name)));
}

void PropertyEditorFinder::setPackages($StringArray* packages) {
	$InstanceFinder::setPackages(packages);
}

$StringArray* PropertyEditorFinder::getPackages() {
	return $InstanceFinder::getPackages();
}

PropertyEditorFinder::PropertyEditorFinder() {
}

void clinit$PropertyEditorFinder($Class* class$) {
	$assignStatic(PropertyEditorFinder::DEFAULT, "sun.beans.editors"_s);
	$assignStatic(PropertyEditorFinder::DEFAULT_NEW, "com.sun.beans.editors"_s);
}

$Class* PropertyEditorFinder::load$($String* name, bool initialize) {
	$loadClass(PropertyEditorFinder, name, initialize, &_PropertyEditorFinder_ClassInfo_, clinit$PropertyEditorFinder, allocate$PropertyEditorFinder);
	return class$;
}

$Class* PropertyEditorFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com