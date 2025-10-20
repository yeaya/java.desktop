#include <java/awt/font/FontRenderContext.h>

#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef KEY_FRACTIONALMETRICS
#undef KEY_TEXT_ANTIALIASING
#undef TYPE_IDENTITY
#undef VALUE_FRACTIONALMETRICS_DEFAULT
#undef VALUE_FRACTIONALMETRICS_OFF
#undef VALUE_FRACTIONALMETRICS_ON
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef VALUE_TEXT_ANTIALIAS_ON

using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _FontRenderContext_FieldInfo_[] = {
	{"tx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $TRANSIENT, $field(FontRenderContext, tx)},
	{"aaHintValue", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(FontRenderContext, aaHintValue)},
	{"fmHintValue", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(FontRenderContext, fmHintValue)},
	{"defaulting", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(FontRenderContext, defaulting)},
	{}
};

$MethodInfo _FontRenderContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FontRenderContext::*)()>(&FontRenderContext::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(FontRenderContext::*)($AffineTransform*,bool,bool)>(&FontRenderContext::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(FontRenderContext::*)($AffineTransform*,Object$*,Object$*)>(&FontRenderContext::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/awt/font/FontRenderContext;)Z", nullptr, $PUBLIC},
	{"getAntiAliasingHint", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFractionalMetricsHint", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getTransformType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAntiAliased", "()Z", nullptr, $PUBLIC},
	{"isTransformed", "()Z", nullptr, $PUBLIC},
	{"usesFractionalMetrics", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontRenderContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.font.FontRenderContext",
	"java.lang.Object",
	nullptr,
	_FontRenderContext_FieldInfo_,
	_FontRenderContext_MethodInfo_
};

$Object* allocate$FontRenderContext($Class* clazz) {
	return $of($alloc(FontRenderContext));
}

void FontRenderContext::init$() {
	$init($RenderingHints);
	$set(this, aaHintValue, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT);
	$set(this, fmHintValue, $RenderingHints::VALUE_FRACTIONALMETRICS_DEFAULT);
	this->defaulting = true;
}

void FontRenderContext::init$($AffineTransform* tx, bool isAntiAliased, bool usesFractionalMetrics) {
	if (tx != nullptr && !tx->isIdentity()) {
		$set(this, tx, $new($AffineTransform, tx));
	}
	if (isAntiAliased) {
		$init($RenderingHints);
		$set(this, aaHintValue, $RenderingHints::VALUE_TEXT_ANTIALIAS_ON);
	} else {
		$init($RenderingHints);
		$set(this, aaHintValue, $RenderingHints::VALUE_TEXT_ANTIALIAS_OFF);
	}
	if (usesFractionalMetrics) {
		$init($RenderingHints);
		$set(this, fmHintValue, $RenderingHints::VALUE_FRACTIONALMETRICS_ON);
	} else {
		$init($RenderingHints);
		$set(this, fmHintValue, $RenderingHints::VALUE_FRACTIONALMETRICS_OFF);
	}
}

void FontRenderContext::init$($AffineTransform* tx, Object$* aaHint, Object$* fmHint) {
	$useLocalCurrentObjectStackCache();
	if (tx != nullptr && !tx->isIdentity()) {
		$set(this, tx, $new($AffineTransform, tx));
	}
	try {
		$init($RenderingHints);
		if ($nc($RenderingHints::KEY_TEXT_ANTIALIASING)->isCompatibleValue(aaHint)) {
			$set(this, aaHintValue, aaHint);
		} else {
			$throwNew($IllegalArgumentException, $$str({"AA hint:"_s, aaHint}));
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IllegalArgumentException, $$str({"AA hint:"_s, aaHint}));
	}
	try {
		$init($RenderingHints);
		if ($nc($RenderingHints::KEY_FRACTIONALMETRICS)->isCompatibleValue(fmHint)) {
			$set(this, fmHintValue, fmHint);
		} else {
			$throwNew($IllegalArgumentException, $$str({"FM hint:"_s, fmHint}));
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IllegalArgumentException, $$str({"FM hint:"_s, fmHint}));
	}
}

bool FontRenderContext::isTransformed() {
	if (!this->defaulting) {
		return this->tx != nullptr;
	} else {
		return !$nc($(getTransform()))->isIdentity();
	}
}

int32_t FontRenderContext::getTransformType() {
	if (!this->defaulting) {
		if (this->tx == nullptr) {
			return $AffineTransform::TYPE_IDENTITY;
		} else {
			return $nc(this->tx)->getType();
		}
	} else {
		return $nc($(getTransform()))->getType();
	}
}

$AffineTransform* FontRenderContext::getTransform() {
	return (this->tx == nullptr) ? $new($AffineTransform) : $new($AffineTransform, this->tx);
}

bool FontRenderContext::isAntiAliased() {
	$init($RenderingHints);
	return !($equals(this->aaHintValue, $RenderingHints::VALUE_TEXT_ANTIALIAS_OFF) || $equals(this->aaHintValue, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT));
}

bool FontRenderContext::usesFractionalMetrics() {
	$init($RenderingHints);
	return !($equals(this->fmHintValue, $RenderingHints::VALUE_FRACTIONALMETRICS_OFF) || $equals(this->fmHintValue, $RenderingHints::VALUE_FRACTIONALMETRICS_DEFAULT));
}

$Object* FontRenderContext::getAntiAliasingHint() {
	if (this->defaulting) {
		if (isAntiAliased()) {
			$init($RenderingHints);
			return $of($RenderingHints::VALUE_TEXT_ANTIALIAS_ON);
		} else {
			$init($RenderingHints);
			return $of($RenderingHints::VALUE_TEXT_ANTIALIAS_OFF);
		}
	}
	return $of(this->aaHintValue);
}

$Object* FontRenderContext::getFractionalMetricsHint() {
	if (this->defaulting) {
		if (usesFractionalMetrics()) {
			$init($RenderingHints);
			return $of($RenderingHints::VALUE_FRACTIONALMETRICS_ON);
		} else {
			$init($RenderingHints);
			return $of($RenderingHints::VALUE_FRACTIONALMETRICS_OFF);
		}
	}
	return $of(this->fmHintValue);
}

bool FontRenderContext::equals(Object$* obj) {
	try {
		return equals($cast(FontRenderContext, obj));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool FontRenderContext::equals(FontRenderContext* rhs) {
	$useLocalCurrentObjectStackCache();
	if (this == rhs) {
		return true;
	}
	if (rhs == nullptr) {
		return false;
	}
	if (!$nc(rhs)->defaulting && !this->defaulting) {
		if ($equals(rhs->aaHintValue, this->aaHintValue) && $equals(rhs->fmHintValue, this->fmHintValue)) {
			return this->tx == nullptr ? rhs->tx == nullptr : $nc(this->tx)->equals(rhs->tx);
		}
		return false;
	} else {
		bool var$1 = $equals(rhs->getAntiAliasingHint(), getAntiAliasingHint());
		if (var$1) {
			var$1 = $equals(rhs->getFractionalMetricsHint(), getFractionalMetricsHint());
		}
		bool var$0 = var$1;
		return var$0 && $nc($(rhs->getTransform()))->equals($(getTransform()));
	}
}

int32_t FontRenderContext::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = this->tx == nullptr ? 0 : $nc(this->tx)->hashCode();
	if (this->defaulting) {
		hash += $nc($of($(getAntiAliasingHint())))->hashCode();
		hash += $nc($of($(getFractionalMetricsHint())))->hashCode();
	} else {
		hash += $nc($of(this->aaHintValue))->hashCode();
		hash += $nc($of(this->fmHintValue))->hashCode();
	}
	return hash;
}

FontRenderContext::FontRenderContext() {
}

$Class* FontRenderContext::load$($String* name, bool initialize) {
	$loadClass(FontRenderContext, name, initialize, &_FontRenderContext_ClassInfo_, allocate$FontRenderContext);
	return class$;
}

$Class* FontRenderContext::class$ = nullptr;

		} // font
	} // awt
} // java