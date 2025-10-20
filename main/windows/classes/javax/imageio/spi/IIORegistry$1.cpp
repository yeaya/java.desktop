#include <javax/imageio/spi/IIORegistry$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/imageio/spi/IIORegistry.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $IIORegistry = ::javax::imageio::spi::IIORegistry;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _IIORegistry$1_FieldInfo_[] = {
	{"this$0", "Ljavax/imageio/spi/IIORegistry;", nullptr, $FINAL | $SYNTHETIC, $field(IIORegistry$1, this$0)},
	{}
};

$MethodInfo _IIORegistry$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/IIORegistry;)V", nullptr, 0, $method(static_cast<void(IIORegistry$1::*)($IIORegistry*)>(&IIORegistry$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IIORegistry$1_EnclosingMethodInfo_ = {
	"javax.imageio.spi.IIORegistry",
	"registerInstalledProviders",
	"()V"
};

$InnerClassInfo _IIORegistry$1_InnerClassesInfo_[] = {
	{"javax.imageio.spi.IIORegistry$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IIORegistry$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.spi.IIORegistry$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_IIORegistry$1_FieldInfo_,
	_IIORegistry$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_IIORegistry$1_EnclosingMethodInfo_,
	_IIORegistry$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.spi.IIORegistry"
};

$Object* allocate$IIORegistry$1($Class* clazz) {
	return $of($alloc(IIORegistry$1));
}

void IIORegistry$1::init$($IIORegistry* this$0) {
	$set(this, this$0, this$0);
}

$Object* IIORegistry$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Iterator, categories, this->this$0->getCategories());
	while ($nc(categories)->hasNext()) {
		$Class* c = $cast($Class, categories->next());
		{
			$var($Iterator, i$, $nc($($ServiceLoader::loadInstalled(c)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($IIOServiceProvider, p, $cast($IIOServiceProvider, i$->next()));
				{
					this->this$0->registerServiceProvider(p);
				}
			}
		}
	}
	return $of(this);
}

IIORegistry$1::IIORegistry$1() {
}

$Class* IIORegistry$1::load$($String* name, bool initialize) {
	$loadClass(IIORegistry$1, name, initialize, &_IIORegistry$1_ClassInfo_, allocate$IIORegistry$1);
	return class$;
}

$Class* IIORegistry$1::class$ = nullptr;

		} // spi
	} // imageio
} // javax