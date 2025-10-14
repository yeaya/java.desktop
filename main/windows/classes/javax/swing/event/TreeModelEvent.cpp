#include <javax/swing/event/TreeModelEvent.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _TreeModelEvent_FieldInfo_[] = {
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeModelEvent, path)},
	{"childIndices", "[I", nullptr, $PROTECTED, $field(TreeModelEvent, childIndices)},
	{"children", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(TreeModelEvent, children)},
	{}
};

$MethodInfo _TreeModelEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeModelEvent::*)(Object$*,$ObjectArray*,$ints*,$ObjectArray*)>(&TreeModelEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;[I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeModelEvent::*)(Object$*,$TreePath*,$ints*,$ObjectArray*)>(&TreeModelEvent::init$))},
	{"<init>", "(Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeModelEvent::*)(Object$*,$ObjectArray*)>(&TreeModelEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeModelEvent::*)(Object$*,$TreePath*)>(&TreeModelEvent::init$))},
	{"getChildIndices", "()[I", nullptr, $PUBLIC},
	{"getChildren", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPath", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTreePath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TreeModelEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.TreeModelEvent",
	"java.util.EventObject",
	nullptr,
	_TreeModelEvent_FieldInfo_,
	_TreeModelEvent_MethodInfo_
};

$Object* allocate$TreeModelEvent($Class* clazz) {
	return $of($alloc(TreeModelEvent));
}

void TreeModelEvent::init$(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children) {
	TreeModelEvent::init$(source, (path == nullptr) ? ($TreePath*)nullptr : $$new($TreePath, path), childIndices, children);
}

void TreeModelEvent::init$(Object$* source, $TreePath* path, $ints* childIndices, $ObjectArray* children) {
	$EventObject::init$(source);
	$set(this, path, path);
	$set(this, childIndices, childIndices);
	$set(this, children, children);
}

void TreeModelEvent::init$(Object$* source, $ObjectArray* path) {
	TreeModelEvent::init$(source, (path == nullptr) ? ($TreePath*)nullptr : $$new($TreePath, path));
}

void TreeModelEvent::init$(Object$* source, $TreePath* path) {
	$EventObject::init$(source);
	$set(this, path, path);
	$set(this, childIndices, $new($ints, 0));
}

$TreePath* TreeModelEvent::getTreePath() {
	return this->path;
}

$ObjectArray* TreeModelEvent::getPath() {
	if (this->path != nullptr) {
		return $nc(this->path)->getPath();
	}
	return nullptr;
}

$ObjectArray* TreeModelEvent::getChildren() {
	if (this->children != nullptr) {
		int32_t cCount = $nc(this->children)->length;
		$var($ObjectArray, retChildren, $new($ObjectArray, cCount));
		$System::arraycopy(this->children, 0, retChildren, 0, cCount);
		return retChildren;
	}
	return nullptr;
}

$ints* TreeModelEvent::getChildIndices() {
	if (this->childIndices != nullptr) {
		int32_t cCount = $nc(this->childIndices)->length;
		$var($ints, retArray, $new($ints, cCount));
		$System::arraycopy(this->childIndices, 0, retArray, 0, cCount);
		return retArray;
	}
	return nullptr;
}

$String* TreeModelEvent::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($String, var$0, $$str({$($of(this)->getClass()->getName()), " "_s}));
	sb->append($$concat(var$0, $($Integer::toString(hashCode()))));
	if (this->path != nullptr) {
		sb->append($$str({" path "_s, this->path}));
	}
	if (this->childIndices != nullptr) {
		sb->append(" indices [ "_s);
		for (int32_t counter = 0; counter < $nc(this->childIndices)->length; ++counter) {
			sb->append($$str({$($Integer::toString($nc(this->childIndices)->get(counter))), " "_s}));
		}
		sb->append("]"_s);
	}
	if (this->children != nullptr) {
		sb->append(" children [ "_s);
		for (int32_t counter = 0; counter < $nc(this->children)->length; ++counter) {
			sb->append($$str({$nc(this->children)->get(counter), " "_s}));
		}
		sb->append("]"_s);
	}
	return sb->toString();
}

TreeModelEvent::TreeModelEvent() {
}

$Class* TreeModelEvent::load$($String* name, bool initialize) {
	$loadClass(TreeModelEvent, name, initialize, &_TreeModelEvent_ClassInfo_, allocate$TreeModelEvent);
	return class$;
}

$Class* TreeModelEvent::class$ = nullptr;

		} // event
	} // swing
} // javax