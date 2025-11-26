#include <javax/imageio/spi/FilterIterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <javax/imageio/spi/ServiceRegistry$Filter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _FilterIterator_FieldInfo_[] = {
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<+TT;>;", $PRIVATE, $field(FilterIterator, iter)},
	{"filter", "Ljavax/imageio/spi/ServiceRegistry$Filter;", nullptr, $PRIVATE, $field(FilterIterator, filter)},
	{"next", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(FilterIterator, next$)},
	{}
};

$MethodInfo _FilterIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;Ljavax/imageio/spi/ServiceRegistry$Filter;)V", "(Ljava/util/Iterator<+TT;>;Ljavax/imageio/spi/ServiceRegistry$Filter;)V", $PUBLIC, $method(static_cast<void(FilterIterator::*)($Iterator*,$ServiceRegistry$Filter*)>(&FilterIterator::init$))},
	{"advance", "()V", nullptr, $PRIVATE, $method(static_cast<void(FilterIterator::*)()>(&FilterIterator::advance))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FilterIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.spi.FilterIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_FilterIterator_FieldInfo_,
	_FilterIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;"
};

$Object* allocate$FilterIterator($Class* clazz) {
	return $of($alloc(FilterIterator));
}

void FilterIterator::init$($Iterator* iter, $ServiceRegistry$Filter* filter) {
	$set(this, next$, nullptr);
	$set(this, iter, iter);
	$set(this, filter, filter);
	advance();
}

void FilterIterator::advance() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->iter)->hasNext()) {
		$var($Object, elt, $nc(this->iter)->next());
		if ($nc(this->filter)->filter(elt)) {
			$set(this, next$, elt);
			return;
		}
	}
	$set(this, next$, nullptr);
}

bool FilterIterator::hasNext() {
	return this->next$ != nullptr;
}

$Object* FilterIterator::next() {
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, o, this->next$);
	advance();
	return $of(o);
}

void FilterIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

FilterIterator::FilterIterator() {
}

$Class* FilterIterator::load$($String* name, bool initialize) {
	$loadClass(FilterIterator, name, initialize, &_FilterIterator_ClassInfo_, allocate$FilterIterator);
	return class$;
}

$Class* FilterIterator::class$ = nullptr;

		} // spi
	} // imageio
} // javax