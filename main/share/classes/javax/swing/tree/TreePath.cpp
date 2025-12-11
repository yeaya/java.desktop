#include <javax/swing/tree/TreePath.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace swing {
		namespace tree {

$Attribute TreePath_Attribute_var$1[] = {
	{'s', "path"},
	{'-'}
};

$NamedAttribute TreePath_Attribute_var$0[] = {
	{"value", '[', TreePath_Attribute_var$1},
	{}
};

$CompoundAttribute _TreePath_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", TreePath_Attribute_var$0},
	{}
};

$FieldInfo _TreePath_FieldInfo_[] = {
	{"parentPath", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(TreePath, parentPath)},
	{"lastPathComponent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TreePath, lastPathComponent)},
	{}
};

$MethodInfo _TreePath_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TreePath::*)($ObjectArray*)>(&TreePath::init$)), nullptr, nullptr, _TreePath_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TreePath::*)(Object$*)>(&TreePath::init$))},
	{"<init>", "(Ljavax/swing/tree/TreePath;Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(TreePath::*)(TreePath*,Object$*)>(&TreePath::init$))},
	{"<init>", "([Ljava/lang/Object;I)V", nullptr, $PROTECTED, $method(static_cast<void(TreePath::*)($ObjectArray*,int32_t)>(&TreePath::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TreePath::*)()>(&TreePath::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLastPathComponent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getParentPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPath", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPathComponent", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPathCount", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDescendant", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"pathByAddingChild", "(Ljava/lang/Object;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TreePath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.TreePath",
	"java.lang.Object",
	"java.io.Serializable",
	_TreePath_FieldInfo_,
	_TreePath_MethodInfo_
};

$Object* allocate$TreePath($Class* clazz) {
	return $of($alloc(TreePath));
}

void TreePath::init$($ObjectArray* path) {
	if (path == nullptr || $nc(path)->length == 0) {
		$throwNew($IllegalArgumentException, "path in TreePath must be non null and not empty."_s);
	}
	$set(this, lastPathComponent, $nc(path)->get(path->length - 1));
	if (this->lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "Last path component must be non-null"_s);
	}
	if (path->length > 1) {
		$set(this, parentPath, $new(TreePath, path, path->length - 1));
	}
}

void TreePath::init$(Object$* lastPathComponent) {
	if (lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "path in TreePath must be non null."_s);
	}
	$set(this, lastPathComponent, lastPathComponent);
	$set(this, parentPath, nullptr);
}

void TreePath::init$(TreePath* parent, Object$* lastPathComponent) {
	if (lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "path in TreePath must be non null."_s);
	}
	$set(this, parentPath, parent);
	$set(this, lastPathComponent, lastPathComponent);
}

void TreePath::init$($ObjectArray* path, int32_t length) {
	$set(this, lastPathComponent, $nc(path)->get(length - 1));
	if (this->lastPathComponent == nullptr) {
		$throwNew($IllegalArgumentException, "Path elements must be non-null"_s);
	}
	if (length > 1) {
		$set(this, parentPath, $new(TreePath, path, length - 1));
	}
}

void TreePath::init$() {
}

$ObjectArray* TreePath::getPath() {
	$useLocalCurrentObjectStackCache();
	int32_t i = getPathCount();
	$var($ObjectArray, result, $new($ObjectArray, i--));
	{
		$var(TreePath, path, this);
		for (; path != nullptr; $assign(path, path->getParentPath())) {
			result->set(i--, $($nc(path)->getLastPathComponent()));
		}
	}
	return result;
}

$Object* TreePath::getLastPathComponent() {
	return $of(this->lastPathComponent);
}

int32_t TreePath::getPathCount() {
	int32_t result = 0;
	{
		$var(TreePath, path, this);
		for (; path != nullptr; $assign(path, path->getParentPath())) {
			++result;
		}
	}
	return result;
}

$Object* TreePath::getPathComponent(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t pathLength = getPathCount();
	if (index < 0 || index >= pathLength) {
		$throwNew($IllegalArgumentException, $$str({"Index "_s, $$str(index), " is out of the specified range"_s}));
	}
	$var(TreePath, path, this);
	for (int32_t i = pathLength - 1; i != index; --i) {
		$assign(path, $nc(path)->getParentPath());
	}
	return $of($nc(path)->getLastPathComponent());
}

bool TreePath::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if ($instanceOf(TreePath, o)) {
		$var(TreePath, oTreePath, $cast(TreePath, o));
		int32_t var$0 = getPathCount();
		if (var$0 != $nc(oTreePath)->getPathCount()) {
			return false;
		}
		{
			$var(TreePath, path, this);
			for (; path != nullptr; $assign(path, path->getParentPath())) {
				if (!($nc($of($($nc(path)->getLastPathComponent())))->equals($($nc(oTreePath)->getLastPathComponent())))) {
					return false;
				}
				$assign(oTreePath, $nc(oTreePath)->getParentPath());
			}
		}
		return true;
	}
	return false;
}

int32_t TreePath::hashCode() {
	return $nc($of($(getLastPathComponent())))->hashCode();
}

bool TreePath::isDescendant(TreePath* aTreePath$renamed) {
	$var(TreePath, aTreePath, aTreePath$renamed);
	if (aTreePath == this) {
		return true;
	}
	if (aTreePath != nullptr) {
		int32_t pathLength = getPathCount();
		int32_t oPathLength = aTreePath->getPathCount();
		if (oPathLength < pathLength) {
			return false;
		}
		while (oPathLength-- > pathLength) {
			$assign(aTreePath, $nc(aTreePath)->getParentPath());
		}
		return equals(aTreePath);
	}
	return false;
}

TreePath* TreePath::pathByAddingChild(Object$* child) {
	if (child == nullptr) {
		$throwNew($NullPointerException, "Null child not allowed"_s);
	}
	return $new(TreePath, this, child);
}

TreePath* TreePath::getParentPath() {
	return this->parentPath;
}

$String* TreePath::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, tempSpot, $new($StringBuilder, "["_s));
	{
		int32_t counter = 0;
		int32_t maxCounter = getPathCount();
		for (; counter < maxCounter; ++counter) {
			if (counter > 0) {
				tempSpot->append(", "_s);
			}
			tempSpot->append($(getPathComponent(counter)));
		}
	}
	tempSpot->append("]"_s);
	return tempSpot->toString();
}

TreePath::TreePath() {
}

$Class* TreePath::load$($String* name, bool initialize) {
	$loadClass(TreePath, name, initialize, &_TreePath_ClassInfo_, allocate$TreePath);
	return class$;
}

$Class* TreePath::class$ = nullptr;

		} // tree
	} // swing
} // javax