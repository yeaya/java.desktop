#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader$1.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Callable = ::java::util::concurrent::Callable;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicDirectoryModel$DoChangeContents = ::javax::swing::plaf::basic::BasicDirectoryModel$DoChangeContents;
using $BasicDirectoryModel$FilesLoader = ::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDirectoryModel$FilesLoader$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/plaf/basic/BasicDirectoryModel$FilesLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$FilesLoader$1, this$1)},
	{"val$newFileCache", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$FilesLoader$1, val$newFileCache)},
	{}
};

$MethodInfo _BasicDirectoryModel$FilesLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDirectoryModel$FilesLoader;Ljava/util/Vector;)V", "()V", 0, $method(static_cast<void(BasicDirectoryModel$FilesLoader$1::*)($BasicDirectoryModel$FilesLoader*,$Vector*)>(&BasicDirectoryModel$FilesLoader$1::init$))},
	{"call", "()Ljavax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicDirectoryModel$FilesLoader$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader",
	"run0",
	"()V"
};

$InnerClassInfo _BasicDirectoryModel$FilesLoader$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader", "javax.swing.plaf.basic.BasicDirectoryModel", "FilesLoader", $PRIVATE | $FINAL},
	{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents", "javax.swing.plaf.basic.BasicDirectoryModel", "DoChangeContents", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _BasicDirectoryModel$FilesLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_BasicDirectoryModel$FilesLoader$1_FieldInfo_,
	_BasicDirectoryModel$FilesLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents;>;",
	&_BasicDirectoryModel$FilesLoader$1_EnclosingMethodInfo_,
	_BasicDirectoryModel$FilesLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDirectoryModel"
};

$Object* allocate$BasicDirectoryModel$FilesLoader$1($Class* clazz) {
	return $of($alloc(BasicDirectoryModel$FilesLoader$1));
}

void BasicDirectoryModel$FilesLoader$1::init$($BasicDirectoryModel$FilesLoader* this$1, $Vector* val$newFileCache) {
	$set(this, this$1, this$1);
	$set(this, val$newFileCache, val$newFileCache);
}

$Object* BasicDirectoryModel$FilesLoader$1::call() {
	int32_t newSize = $nc(this->val$newFileCache)->size();
	int32_t oldSize = $nc($nc(this->this$1->this$0)->fileCache)->size();
	if (newSize > oldSize) {
		int32_t start = oldSize;
		int32_t end = newSize;
		for (int32_t i = 0; i < oldSize; ++i) {
			if (!$nc(($cast($File, $($nc(this->val$newFileCache)->get(i)))))->equals($($nc($nc(this->this$1->this$0)->fileCache)->get(i)))) {
				start = i;
				for (int32_t j = i; j < newSize; ++j) {
					if ($nc(($cast($File, $($nc(this->val$newFileCache)->get(j)))))->equals($($nc($nc(this->this$1->this$0)->fileCache)->get(i)))) {
						end = j;
						break;
					}
				}
				break;
			}
		}
		if (start >= 0 && end > start && $nc($($nc(this->val$newFileCache)->subList(end, newSize)))->equals($($nc($nc(this->this$1->this$0)->fileCache)->subList(start, oldSize)))) {
			if ($nc(this->this$1->loadThread)->isInterrupted()) {
				return $of(nullptr);
			}
			return $of($new($BasicDirectoryModel$DoChangeContents, this->this$1->this$0, $($nc(this->val$newFileCache)->subList(start, end)), start, nullptr, 0, this->this$1->fid));
		}
	} else if (newSize < oldSize) {
		int32_t start = -1;
		int32_t end = -1;
		for (int32_t i = 0; i < newSize; ++i) {
			if (!$nc(($cast($File, $($nc(this->val$newFileCache)->get(i)))))->equals($($nc($nc(this->this$1->this$0)->fileCache)->get(i)))) {
				start = i;
				end = i + oldSize - newSize;
				break;
			}
		}
		if (start >= 0 && end > start && $nc($($nc($nc(this->this$1->this$0)->fileCache)->subList(end, oldSize)))->equals($($nc(this->val$newFileCache)->subList(start, newSize)))) {
			if ($nc(this->this$1->loadThread)->isInterrupted()) {
				return $of(nullptr);
			}
			return $of($new($BasicDirectoryModel$DoChangeContents, this->this$1->this$0, nullptr, 0, $$new($Vector, $(static_cast<$Collection*>($nc($nc(this->this$1->this$0)->fileCache)->subList(start, end)))), start, this->this$1->fid));
		}
	}
	if (!$nc($nc(this->this$1->this$0)->fileCache)->equals(this->val$newFileCache)) {
		if ($nc(this->this$1->loadThread)->isInterrupted()) {
			this->this$1->cancelRunnables();
		}
		return $of($new($BasicDirectoryModel$DoChangeContents, this->this$1->this$0, this->val$newFileCache, 0, $nc(this->this$1->this$0)->fileCache, 0, this->this$1->fid));
	}
	return $of(nullptr);
}

BasicDirectoryModel$FilesLoader$1::BasicDirectoryModel$FilesLoader$1() {
}

$Class* BasicDirectoryModel$FilesLoader$1::load$($String* name, bool initialize) {
	$loadClass(BasicDirectoryModel$FilesLoader$1, name, initialize, &_BasicDirectoryModel$FilesLoader$1_ClassInfo_, allocate$BasicDirectoryModel$FilesLoader$1);
	return class$;
}

$Class* BasicDirectoryModel$FilesLoader$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax