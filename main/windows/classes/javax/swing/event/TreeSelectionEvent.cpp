#include <javax/swing/event/TreeSelectionEvent.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _TreeSelectionEvent_FieldInfo_[] = {
	{"paths", "[Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeSelectionEvent, paths)},
	{"areNew", "[Z", nullptr, $PROTECTED, $field(TreeSelectionEvent, areNew)},
	{"oldLeadSelectionPath", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeSelectionEvent, oldLeadSelectionPath)},
	{"newLeadSelectionPath", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeSelectionEvent, newLeadSelectionPath)},
	{}
};

$MethodInfo _TreeSelectionEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;[Ljavax/swing/tree/TreePath;[ZLjavax/swing/tree/TreePath;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeSelectionEvent::*)(Object$*,$TreePathArray*,$booleans*,$TreePath*,$TreePath*)>(&TreeSelectionEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;ZLjavax/swing/tree/TreePath;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeSelectionEvent::*)(Object$*,$TreePath*,bool,$TreePath*,$TreePath*)>(&TreeSelectionEvent::init$))},
	{"cloneWithSource", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNewLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getOldLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPaths", "()[Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"isAddedPath", "()Z", nullptr, $PUBLIC},
	{"isAddedPath", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isAddedPath", "(I)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TreeSelectionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.TreeSelectionEvent",
	"java.util.EventObject",
	nullptr,
	_TreeSelectionEvent_FieldInfo_,
	_TreeSelectionEvent_MethodInfo_
};

$Object* allocate$TreeSelectionEvent($Class* clazz) {
	return $of($alloc(TreeSelectionEvent));
}

void TreeSelectionEvent::init$(Object$* source, $TreePathArray* paths, $booleans* areNew, $TreePath* oldLeadSelectionPath, $TreePath* newLeadSelectionPath) {
	$EventObject::init$(source);
	$set(this, paths, paths);
	$set(this, areNew, areNew);
	$set(this, oldLeadSelectionPath, oldLeadSelectionPath);
	$set(this, newLeadSelectionPath, newLeadSelectionPath);
}

void TreeSelectionEvent::init$(Object$* source, $TreePath* path, bool isNew, $TreePath* oldLeadSelectionPath, $TreePath* newLeadSelectionPath) {
	$EventObject::init$(source);
	$set(this, paths, $new($TreePathArray, 1));
	$nc(this->paths)->set(0, path);
	$set(this, areNew, $new($booleans, 1));
	$nc(this->areNew)->set(0, isNew);
	$set(this, oldLeadSelectionPath, oldLeadSelectionPath);
	$set(this, newLeadSelectionPath, newLeadSelectionPath);
}

$TreePathArray* TreeSelectionEvent::getPaths() {
	int32_t numPaths = 0;
	$var($TreePathArray, retPaths, nullptr);
	numPaths = $nc(this->paths)->length;
	$assign(retPaths, $new($TreePathArray, numPaths));
	$System::arraycopy(this->paths, 0, retPaths, 0, numPaths);
	return retPaths;
}

$TreePath* TreeSelectionEvent::getPath() {
	return $nc(this->paths)->get(0);
}

bool TreeSelectionEvent::isAddedPath() {
	return $nc(this->areNew)->get(0);
}

bool TreeSelectionEvent::isAddedPath($TreePath* path) {
	for (int32_t counter = $nc(this->paths)->length - 1; counter >= 0; --counter) {
		if ($nc($nc(this->paths)->get(counter))->equals(path)) {
			return $nc(this->areNew)->get(counter);
		}
	}
	$throwNew($IllegalArgumentException, "path is not a path identified by the TreeSelectionEvent"_s);
}

bool TreeSelectionEvent::isAddedPath(int32_t index) {
	if (this->paths == nullptr || index < 0 || index >= $nc(this->paths)->length) {
		$throwNew($IllegalArgumentException, "index is beyond range of added paths identified by TreeSelectionEvent"_s);
	}
	return $nc(this->areNew)->get(index);
}

$TreePath* TreeSelectionEvent::getOldLeadSelectionPath() {
	return this->oldLeadSelectionPath;
}

$TreePath* TreeSelectionEvent::getNewLeadSelectionPath() {
	return this->newLeadSelectionPath;
}

$Object* TreeSelectionEvent::cloneWithSource(Object$* newSource) {
	return $of($new(TreeSelectionEvent, newSource, this->paths, this->areNew, this->oldLeadSelectionPath, this->newLeadSelectionPath));
}

TreeSelectionEvent::TreeSelectionEvent() {
}

$Class* TreeSelectionEvent::load$($String* name, bool initialize) {
	$loadClass(TreeSelectionEvent, name, initialize, &_TreeSelectionEvent_ClassInfo_, allocate$TreeSelectionEvent);
	return class$;
}

$Class* TreeSelectionEvent::class$ = nullptr;

		} // event
	} // swing
} // javax