#include <javax/swing/plaf/nimbus/NimbusStyle.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/Painter.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusStyle$1.h>
#include <javax/swing/plaf/nimbus/NimbusStyle$CacheKey.h>
#include <javax/swing/plaf/nimbus/NimbusStyle$RuntimeState.h>
#include <javax/swing/plaf/nimbus/NimbusStyle$Values.h>
#include <javax/swing/plaf/nimbus/State$StandardState.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <javax/swing/plaf/nimbus/SynthPainterImpl.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BLACK
#undef DEFAULT_COLOR
#undef FOCUS
#undef FOREGROUND
#undef LARGE_KEY
#undef LARGE_SCALE
#undef MINI_KEY
#undef MINI_SCALE
#undef NULL
#undef SMALL_KEY
#undef SMALL_SCALE
#undef STATE_COMPARATOR
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $NimbusStyle$RuntimeStateArray = $Array<::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState>;
using $StateArray = $Array<::javax::swing::plaf::nimbus::State>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Painter = ::javax::swing::Painter;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $NimbusStyle$1 = ::javax::swing::plaf::nimbus::NimbusStyle$1;
using $NimbusStyle$CacheKey = ::javax::swing::plaf::nimbus::NimbusStyle$CacheKey;
using $NimbusStyle$RuntimeState = ::javax::swing::plaf::nimbus::NimbusStyle$RuntimeState;
using $NimbusStyle$Values = ::javax::swing::plaf::nimbus::NimbusStyle$Values;
using $State = ::javax::swing::plaf::nimbus::State;
using $State$StandardState = ::javax::swing::plaf::nimbus::State$StandardState;
using $SynthPainterImpl = ::javax::swing::plaf::nimbus::SynthPainterImpl;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusStyle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NimbusStyle, $assertionsDisabled)},
	{"LARGE_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NimbusStyle, LARGE_KEY)},
	{"SMALL_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NimbusStyle, SMALL_KEY)},
	{"MINI_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NimbusStyle, MINI_KEY)},
	{"LARGE_SCALE", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NimbusStyle, LARGE_SCALE)},
	{"SMALL_SCALE", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NimbusStyle, SMALL_SCALE)},
	{"MINI_SCALE", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NimbusStyle, MINI_SCALE)},
	{"NULL", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NimbusStyle, NULL)},
	{"DEFAULT_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NimbusStyle, DEFAULT_COLOR)},
	{"STATE_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;>;", $PRIVATE | $STATIC | $FINAL, $staticField(NimbusStyle, STATE_COMPARATOR)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusStyle, prefix)},
	{"painter", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE, $field(NimbusStyle, painter)},
	{"values", "Ljavax/swing/plaf/nimbus/NimbusStyle$Values;", nullptr, $PRIVATE, $field(NimbusStyle, values)},
	{"tmpKey", "Ljavax/swing/plaf/nimbus/NimbusStyle$CacheKey;", nullptr, $PRIVATE, $field(NimbusStyle, tmpKey)},
	{"component", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JComponent;>;", $PRIVATE, $field(NimbusStyle, component)},
	{}
};

$MethodInfo _NimbusStyle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/swing/JComponent;)V", nullptr, 0, $method(static_cast<void(NimbusStyle::*)($String*,$JComponent*)>(&NimbusStyle::init$))},
	{"contains", "([Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(NimbusStyle::*)($StringArray*,$String*)>(&NimbusStyle::contains))},
	{"get", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBackgroundPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Painter;", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Painter<Ljava/lang/Object;>;", $PUBLIC, $method(static_cast<$Painter*(NimbusStyle::*)($SynthContext*)>(&NimbusStyle::getBackgroundPainter))},
	{"getBorderPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Painter;", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Painter<Ljava/lang/Object;>;", $PUBLIC, $method(static_cast<$Painter*(NimbusStyle::*)($SynthContext*)>(&NimbusStyle::getBorderPainter))},
	{"getColorForState", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getExtendedState", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/nimbus/NimbusStyle$Values;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(NimbusStyle::*)($SynthContext*,$NimbusStyle$Values*)>(&NimbusStyle::getExtendedState))},
	{"getFontForState", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PROTECTED},
	{"getForegroundPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Painter;", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Painter<Ljava/lang/Object;>;", $PUBLIC, $method(static_cast<$Painter*(NimbusStyle::*)($SynthContext*)>(&NimbusStyle::getForegroundPainter))},
	{"getInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getNextState", "([Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;[II)Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;", nullptr, $PRIVATE, $method(static_cast<$NimbusStyle$RuntimeState*(NimbusStyle::*)($NimbusStyle$RuntimeStateArray*,$ints*,int32_t)>(&NimbusStyle::getNextState))},
	{"getPainter", "(Ljava/util/Map;Ljava/lang/String;)Ljavax/swing/Painter;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;Ljava/lang/String;)Ljavax/swing/Painter<Ljava/lang/Object;>;", $PRIVATE, $method(static_cast<$Painter*(NimbusStyle::*)($Map*,$String*)>(&NimbusStyle::getPainter))},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PUBLIC},
	{"getValues", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/nimbus/NimbusStyle$Values;", nullptr, $PRIVATE, $method(static_cast<$NimbusStyle$Values*(NimbusStyle::*)($SynthContext*)>(&NimbusStyle::getValues))},
	{"installDefaults", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PUBLIC},
	{"isOpaque", "(Ljavax/swing/plaf/synth/SynthContext;)Z", nullptr, $PUBLIC},
	{"paintFilter", "(Ljavax/swing/Painter;)Ljavax/swing/Painter;", "(Ljavax/swing/Painter;)Ljavax/swing/Painter<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$Painter*(*)($Painter*)>(&NimbusStyle::paintFilter))},
	{"validate", "()V", nullptr, $PRIVATE, $method(static_cast<void(NimbusStyle::*)()>(&NimbusStyle::validate))},
	{}
};

$InnerClassInfo _NimbusStyle_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusStyle$CacheKey", "javax.swing.plaf.nimbus.NimbusStyle", "CacheKey", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusStyle$Values", "javax.swing.plaf.nimbus.NimbusStyle", "Values", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusStyle$RuntimeState", "javax.swing.plaf.nimbus.NimbusStyle", "RuntimeState", $PRIVATE | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusStyle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NimbusStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusStyle",
	"javax.swing.plaf.synth.SynthStyle",
	nullptr,
	_NimbusStyle_FieldInfo_,
	_NimbusStyle_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusStyle$CacheKey,javax.swing.plaf.nimbus.NimbusStyle$Values,javax.swing.plaf.nimbus.NimbusStyle$RuntimeState,javax.swing.plaf.nimbus.NimbusStyle$1"
};

$Object* allocate$NimbusStyle($Class* clazz) {
	return $of($alloc(NimbusStyle));
}

bool NimbusStyle::$assertionsDisabled = false;
$String* NimbusStyle::LARGE_KEY = nullptr;
$String* NimbusStyle::SMALL_KEY = nullptr;
$String* NimbusStyle::MINI_KEY = nullptr;
double NimbusStyle::LARGE_SCALE = 0.0;
double NimbusStyle::SMALL_SCALE = 0.0;
double NimbusStyle::MINI_SCALE = 0.0;
$Object* NimbusStyle::NULL = nullptr;
$Color* NimbusStyle::DEFAULT_COLOR = nullptr;
$Comparator* NimbusStyle::STATE_COMPARATOR = nullptr;

void NimbusStyle::init$($String* prefix, $JComponent* c) {
	$SynthStyle::init$();
	$set(this, tmpKey, $new($NimbusStyle$CacheKey, ""_s, 0));
	if (c != nullptr) {
		$set(this, component, $new($WeakReference, c));
	}
	$set(this, prefix, prefix);
	$set(this, painter, $new($SynthPainterImpl, this));
}

void NimbusStyle::installDefaults($SynthContext* ctx) {
	validate();
	$SynthStyle::installDefaults(ctx);
}

void NimbusStyle::validate() {
	$useLocalCurrentObjectStackCache();
	if (this->values != nullptr) {
		return;
	}
	$set(this, values, $new($NimbusStyle$Values));
	$var($Map, defaults, $nc(($cast($NimbusLookAndFeel, $($UIManager::getLookAndFeel()))))->getDefaultsForPrefix(this->prefix));
	if (this->component != nullptr) {
		$var($Object, o, $nc(($cast($JComponent, $($nc(this->component)->get()))))->getClientProperty("Nimbus.Overrides"_s));
		if ($instanceOf($UIDefaults, o)) {
			$var($Object, i, $nc(($cast($JComponent, $($nc(this->component)->get()))))->getClientProperty("Nimbus.Overrides.InheritDefaults"_s));
			bool inherit = $instanceOf($Boolean, i) ? $nc(($cast($Boolean, i)))->booleanValue() : true;
			$var($UIDefaults, d, $cast($UIDefaults, o));
			$var($TreeMap, map, $new($TreeMap));
			{
				$var($Iterator, i$, $nc($($nc(d)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Object, obj, i$->next());
					{
						if ($instanceOf($String, obj)) {
							$var($String, key, $cast($String, obj));
							if ($nc(key)->startsWith(this->prefix)) {
								map->put(key, $(d->get(key)));
							}
						}
					}
				}
			}
			if (inherit) {
				$nc(defaults)->putAll(static_cast<$Map*>(static_cast<$AbstractMap*>(map)));
			} else {
				$assign(defaults, static_cast<$Map*>(static_cast<$AbstractMap*>(map)));
			}
		}
	}
	$var($List, states, $new($ArrayList));
	$var($Map, stateCodes, $new($HashMap));
	$var($List, runtimeStates, $new($ArrayList));
	$var($String, statesString, $cast($String, $nc(defaults)->get($$str({this->prefix, ".States"_s}))));
	if (statesString != nullptr) {
		$var($StringArray, s, statesString->split(","_s));
		for (int32_t i = 0; i < s->length; ++i) {
			s->set(i, $($nc(s->get(i))->trim()));
			if (!$State::isStandardStateName(s->get(i))) {
				$var($String, stateName, $str({this->prefix, "."_s, s->get(i)}));
				$var($State, customState, $cast($State, defaults->get(stateName)));
				if (customState != nullptr) {
					states->add(customState);
				}
			} else {
				states->add($($State::getStandardState(s->get(i))));
			}
		}
		if (states->size() > 0) {
			$set($nc(this->values), stateTypes, $fcast($StateArray, states->toArray($$new($StateArray, states->size()))));
		}
		int32_t code = 1;
		{
			$var($Iterator, i$, states->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($State, state, $cast($State, i$->next()));
				{
					$var($Object, var$0, $of($nc(state)->getName()));
					stateCodes->put(var$0, $($Integer::valueOf(code)));
					code <<= 1;
				}
			}
		}
	} else {
		$init($State);
		states->add($State::Enabled);
		states->add($State::MouseOver);
		states->add($State::Pressed);
		states->add($State::Disabled);
		states->add($State::Focused);
		states->add($State::Selected);
		states->add($State::Default);
		stateCodes->put("Enabled"_s, $($Integer::valueOf(1)));
		stateCodes->put("MouseOver"_s, $($Integer::valueOf(2)));
		stateCodes->put("Pressed"_s, $($Integer::valueOf(4)));
		stateCodes->put("Disabled"_s, $($Integer::valueOf(8)));
		stateCodes->put("Focused"_s, $($Integer::valueOf(256)));
		stateCodes->put("Selected"_s, $($Integer::valueOf(512)));
		stateCodes->put("Default"_s, $($Integer::valueOf(1024)));
	}
	{
		$var($Iterator, i$, $nc($(defaults->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($String, temp, $nc(key)->substring($nc(this->prefix)->length()));
				bool var$1 = temp->indexOf((int32_t)u'\"') != -1;
				if (var$1 || temp->indexOf((int32_t)u':') != -1) {
					continue;
				}
				$assign(temp, temp->substring(1));
				$var($String, stateString, nullptr);
				$var($String, property, nullptr);
				int32_t bracketIndex = temp->indexOf((int32_t)u']');
				if (bracketIndex < 0) {
					$assign(property, temp);
				} else {
					$assign(stateString, temp->substring(0, bracketIndex));
					$assign(property, temp->substring(bracketIndex + 2));
				}
				if (stateString == nullptr) {
					if ("contentMargins"_s->equals(property)) {
						$set($nc(this->values), contentMargins, $cast($Insets, defaults->get(key)));
					} else if ("States"_s->equals(property)) {
					} else {
						$nc($nc(this->values)->defaults)->put(property, $(defaults->get(key)));
					}
				} else {
					bool skip = false;
					int32_t componentState = 0;
					$var($StringArray, stateParts, $nc(stateString)->split("\\+"_s));
					{
						$var($StringArray, arr$, stateParts);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, s, arr$->get(i$));
							{
								if (stateCodes->containsKey(s)) {
									componentState |= $nc(($cast($Integer, $(stateCodes->get(s)))))->intValue();
								} else {
									skip = true;
									break;
								}
							}
						}
					}
					if (skip) {
						continue;
					}
					$var($NimbusStyle$RuntimeState, rs, nullptr);
					{
						$var($Iterator, i$, runtimeStates->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($NimbusStyle$RuntimeState, s, $cast($NimbusStyle$RuntimeState, i$->next()));
							{
								if ($nc(s)->state == componentState) {
									$assign(rs, s);
									break;
								}
							}
						}
					}
					if (rs == nullptr) {
						$assign(rs, $new($NimbusStyle$RuntimeState, this, componentState, stateString));
						runtimeStates->add(rs);
					}
					if ("backgroundPainter"_s->equals(property)) {
						$set($nc(rs), backgroundPainter, getPainter(defaults, key));
					} else if ("foregroundPainter"_s->equals(property)) {
						$set($nc(rs), foregroundPainter, getPainter(defaults, key));
					} else if ("borderPainter"_s->equals(property)) {
						$set($nc(rs), borderPainter, getPainter(defaults, key));
					} else {
						$nc($nc(rs)->defaults)->put(property, $(defaults->get(key)));
					}
				}
			}
		}
	}
	$Collections::sort(runtimeStates, NimbusStyle::STATE_COMPARATOR);
	$set($nc(this->values), states, $fcast($NimbusStyle$RuntimeStateArray, runtimeStates->toArray($$new($NimbusStyle$RuntimeStateArray, runtimeStates->size()))));
}

$Painter* NimbusStyle::getPainter($Map* defaults, $String* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, p, $nc(defaults)->get(key));
	if ($instanceOf($UIDefaults$LazyValue, p)) {
		$assign(p, $nc(($cast($UIDefaults$LazyValue, p)))->createValue($($UIManager::getDefaults())));
	}
	$var($Painter, tmp, $instanceOf($Painter, p) ? $cast($Painter, p) : ($Painter*)nullptr);
	return tmp;
}

$Insets* NimbusStyle::getInsets($SynthContext* ctx, $Insets* in$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, in, in$renamed);
	if (in == nullptr) {
		$assign(in, $new($Insets, 0, 0, 0, 0));
	}
	$var($NimbusStyle$Values, v, getValues(ctx));
	if ($nc(v)->contentMargins == nullptr) {
		$nc(in)->bottom = (in->top = (in->left = (in->right = 0)));
		return in;
	} else {
		$nc(in)->bottom = $nc(v->contentMargins)->bottom;
		in->top = $nc(v->contentMargins)->top;
		in->left = $nc(v->contentMargins)->left;
		in->right = $nc(v->contentMargins)->right;
		$var($String, scaleKey, $cast($String, $nc($($nc(ctx)->getComponent()))->getClientProperty("JComponent.sizeVariant"_s)));
		if (scaleKey != nullptr) {
			if ($nc(NimbusStyle::LARGE_KEY)->equals(scaleKey)) {
				in->bottom *= NimbusStyle::LARGE_SCALE;
				in->top *= NimbusStyle::LARGE_SCALE;
				in->left *= NimbusStyle::LARGE_SCALE;
				in->right *= NimbusStyle::LARGE_SCALE;
			} else if ($nc(NimbusStyle::SMALL_KEY)->equals(scaleKey)) {
				in->bottom *= NimbusStyle::SMALL_SCALE;
				in->top *= NimbusStyle::SMALL_SCALE;
				in->left *= NimbusStyle::SMALL_SCALE;
				in->right *= NimbusStyle::SMALL_SCALE;
			} else if ($nc(NimbusStyle::MINI_KEY)->equals(scaleKey)) {
				in->bottom *= NimbusStyle::MINI_SCALE;
				in->top *= NimbusStyle::MINI_SCALE;
				in->left *= NimbusStyle::MINI_SCALE;
				in->right *= NimbusStyle::MINI_SCALE;
			}
		}
		return in;
	}
}

$Color* NimbusStyle::getColorForState($SynthContext* ctx, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, nullptr);
	$init($ColorType);
	if (type == $ColorType::BACKGROUND) {
		$assign(key, "background"_s);
	} else {
		if (type == $ColorType::FOREGROUND) {
			$assign(key, "textForeground"_s);
		} else {
			if (type == $ColorType::TEXT_BACKGROUND) {
				$assign(key, "textBackground"_s);
			} else {
				if (type == $ColorType::TEXT_FOREGROUND) {
					$assign(key, "textForeground"_s);
				} else {
					if (type == $ColorType::FOCUS) {
						$assign(key, "focus"_s);
					} else if (type != nullptr) {
						$assign(key, type->toString());
					} else {
						return NimbusStyle::DEFAULT_COLOR;
					}
				}
			}
		}
	}
	$var($Color, c, $cast($Color, get(ctx, key)));
	if (c == nullptr) {
		$assign(c, NimbusStyle::DEFAULT_COLOR);
	}
	return c;
}

$Font* NimbusStyle::getFontForState($SynthContext* ctx) {
	$useLocalCurrentObjectStackCache();
	$var($Font, f, $cast($Font, get(ctx, "font"_s)));
	if (f == nullptr) {
		$assign(f, $UIManager::getFont("defaultFont"_s));
	}
	$var($String, scaleKey, $cast($String, $nc($($nc(ctx)->getComponent()))->getClientProperty("JComponent.sizeVariant"_s)));
	if (scaleKey != nullptr) {
		if ($nc(NimbusStyle::LARGE_KEY)->equals(scaleKey)) {
			$assign(f, $nc(f)->deriveFont((float)$Math::round(f->getSize2D() * NimbusStyle::LARGE_SCALE)));
		} else if ($nc(NimbusStyle::SMALL_KEY)->equals(scaleKey)) {
			$assign(f, $nc(f)->deriveFont((float)$Math::round(f->getSize2D() * NimbusStyle::SMALL_SCALE)));
		} else if ($nc(NimbusStyle::MINI_KEY)->equals(scaleKey)) {
			$assign(f, $nc(f)->deriveFont((float)$Math::round(f->getSize2D() * NimbusStyle::MINI_SCALE)));
		}
	}
	return f;
}

$SynthPainter* NimbusStyle::getPainter($SynthContext* ctx) {
	return this->painter;
}

bool NimbusStyle::isOpaque($SynthContext* ctx) {
	$useLocalCurrentObjectStackCache();
	if ("Table.cellRenderer"_s->equals($($nc($($nc(ctx)->getComponent()))->getName()))) {
		return true;
	}
	$var($Boolean, opaque, $cast($Boolean, get(ctx, "opaque"_s)));
	return opaque == nullptr ? false : $nc(opaque)->booleanValue();
}

$Object* NimbusStyle::get($SynthContext* ctx, Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($NimbusStyle$Values, v, getValues(ctx));
	$var($String, fullKey, $nc($of(key))->toString());
	$var($String, partialKey, $nc(fullKey)->substring(fullKey->indexOf((int32_t)u'.') + 1));
	$var($Object, obj, nullptr);
	int32_t xstate = getExtendedState(ctx, v);
	$nc(this->tmpKey)->init(partialKey, xstate);
	$assign(obj, $nc($nc(v)->cache)->get(this->tmpKey));
	bool wasInCache = obj != nullptr;
	if (!wasInCache) {
		$var($NimbusStyle$RuntimeState, s, nullptr);
		$var($ints, lastIndex, $new($ints, {-1}));
		while (obj == nullptr && ($assign(s, getNextState(v->states, lastIndex, xstate))) != nullptr) {
			$assign(obj, $nc($nc(s)->defaults)->get(partialKey));
		}
		if (obj == nullptr && v->defaults != nullptr) {
			$assign(obj, $nc(v->defaults)->get(partialKey));
		}
		if (obj == nullptr) {
			$assign(obj, $UIManager::get(fullKey));
		}
		if (obj == nullptr && partialKey->equals("focusInputMap"_s)) {
			$assign(obj, $SynthStyle::get(ctx, fullKey));
		}
		$nc(v->cache)->put($$new($NimbusStyle$CacheKey, partialKey, xstate), obj == nullptr ? NimbusStyle::NULL : obj);
	}
	return $of($equals(obj, NimbusStyle::NULL) ? ($Object*)nullptr : obj);
}

$Painter* NimbusStyle::paintFilter($Painter* painter) {
	$init(NimbusStyle);
	return painter;
}

$Painter* NimbusStyle::getBackgroundPainter($SynthContext* ctx) {
	$useLocalCurrentObjectStackCache();
	$var($NimbusStyle$Values, v, getValues(ctx));
	int32_t xstate = getExtendedState(ctx, v);
	$var($Painter, p, nullptr);
	$nc(this->tmpKey)->init("backgroundPainter$$instance"_s, xstate);
	$assign(p, paintFilter($cast($Painter, $($nc($nc(v)->cache)->get(this->tmpKey)))));
	if (p != nullptr) {
		return p;
	}
	$var($NimbusStyle$RuntimeState, s, nullptr);
	$var($ints, lastIndex, $new($ints, {-1}));
	while (($assign(s, getNextState($nc(v)->states, lastIndex, xstate))) != nullptr) {
		if ($nc(s)->backgroundPainter != nullptr) {
			$assign(p, paintFilter(s->backgroundPainter));
			break;
		}
	}
	if (p == nullptr) {
		$assign(p, paintFilter($cast($Painter, $(get(ctx, "backgroundPainter"_s)))));
	}
	if (p != nullptr) {
		$nc($nc(v)->cache)->put($$new($NimbusStyle$CacheKey, "backgroundPainter$$instance"_s, xstate), p);
	}
	return p;
}

$Painter* NimbusStyle::getForegroundPainter($SynthContext* ctx) {
	$useLocalCurrentObjectStackCache();
	$var($NimbusStyle$Values, v, getValues(ctx));
	int32_t xstate = getExtendedState(ctx, v);
	$var($Painter, p, nullptr);
	$nc(this->tmpKey)->init("foregroundPainter$$instance"_s, xstate);
	$assign(p, paintFilter($cast($Painter, $($nc($nc(v)->cache)->get(this->tmpKey)))));
	if (p != nullptr) {
		return p;
	}
	$var($NimbusStyle$RuntimeState, s, nullptr);
	$var($ints, lastIndex, $new($ints, {-1}));
	while (($assign(s, getNextState($nc(v)->states, lastIndex, xstate))) != nullptr) {
		if ($nc(s)->foregroundPainter != nullptr) {
			$assign(p, paintFilter(s->foregroundPainter));
			break;
		}
	}
	if (p == nullptr) {
		$assign(p, paintFilter($cast($Painter, $(get(ctx, "foregroundPainter"_s)))));
	}
	if (p != nullptr) {
		$nc($nc(v)->cache)->put($$new($NimbusStyle$CacheKey, "foregroundPainter$$instance"_s, xstate), p);
	}
	return p;
}

$Painter* NimbusStyle::getBorderPainter($SynthContext* ctx) {
	$useLocalCurrentObjectStackCache();
	$var($NimbusStyle$Values, v, getValues(ctx));
	int32_t xstate = getExtendedState(ctx, v);
	$var($Painter, p, nullptr);
	$nc(this->tmpKey)->init("borderPainter$$instance"_s, xstate);
	$assign(p, paintFilter($cast($Painter, $($nc($nc(v)->cache)->get(this->tmpKey)))));
	if (p != nullptr) {
		return p;
	}
	$var($NimbusStyle$RuntimeState, s, nullptr);
	$var($ints, lastIndex, $new($ints, {-1}));
	while (($assign(s, getNextState($nc(v)->states, lastIndex, xstate))) != nullptr) {
		if ($nc(s)->borderPainter != nullptr) {
			$assign(p, paintFilter(s->borderPainter));
			break;
		}
	}
	if (p == nullptr) {
		$assign(p, paintFilter($cast($Painter, $(get(ctx, "borderPainter"_s)))));
	}
	if (p != nullptr) {
		$nc($nc(v)->cache)->put($$new($NimbusStyle$CacheKey, "borderPainter$$instance"_s, xstate), p);
	}
	return p;
}

$NimbusStyle$Values* NimbusStyle::getValues($SynthContext* ctx) {
	validate();
	return this->values;
}

bool NimbusStyle::contains($StringArray* names, $String* name) {
	if (!NimbusStyle::$assertionsDisabled && !(name != nullptr)) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		if ($nc(name)->equals(names->get(i))) {
			return true;
		}
	}
	return false;
}

int32_t NimbusStyle::getExtendedState($SynthContext* ctx, $NimbusStyle$Values* v) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(ctx)->getComponent());
	int32_t xstate = 0;
	int32_t mask = 1;
	$var($Object, property, $nc(c)->getClientProperty("Nimbus.State"_s));
	if (property != nullptr) {
		$var($String, stateNames, $of(property)->toString());
		$var($StringArray, states, $nc(stateNames)->split("\\+"_s));
		if ($nc(v)->stateTypes == nullptr) {
			{
				$var($StringArray, arr$, states);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, stateStr, arr$->get(i$));
					{
						$var($State$StandardState, s, $State::getStandardState(stateStr));
						if (s != nullptr) {
							xstate |= s->getState();
						}
					}
				}
			}
		} else {
			{
				$var($StateArray, arr$, v->stateTypes);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($State, s, arr$->get(i$));
					{
						if (contains(states, $($nc(s)->getName()))) {
							xstate |= mask;
						}
						mask <<= 1;
					}
				}
			}
		}
	} else {
		if ($nc(v)->stateTypes == nullptr) {
			return ctx->getComponentState();
		}
		int32_t state = ctx->getComponentState();
		{
			$var($StateArray, arr$, $nc(v)->stateTypes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($State, s, arr$->get(i$));
				{
					if ($nc(s)->isInState(c, state)) {
						xstate |= mask;
					}
					mask <<= 1;
				}
			}
		}
	}
	return xstate;
}

$NimbusStyle$RuntimeState* NimbusStyle::getNextState($NimbusStyle$RuntimeStateArray* states, $ints* lastState, int32_t xstate) {
	if (states != nullptr && states->length > 0) {
		int32_t bestCount = 0;
		int32_t bestIndex = -1;
		int32_t wildIndex = -1;
		if (xstate == 0) {
			for (int32_t counter = states->length - 1; counter >= 0; --counter) {
				if ($nc(states->get(counter))->state == 0) {
					$nc(lastState)->set(0, counter);
					return states->get(counter);
				}
			}
			$nc(lastState)->set(0, -1);
			return nullptr;
		}
		int32_t lastStateIndex = lastState == nullptr || $nc(lastState)->get(0) == -1 ? states->length : $nc(lastState)->get(0);
		for (int32_t counter = lastStateIndex - 1; counter >= 0; --counter) {
			int32_t oState = $nc(states->get(counter))->state;
			if (oState == 0) {
				if (wildIndex == -1) {
					wildIndex = counter;
				}
			} else if (((int32_t)(xstate & (uint32_t)oState)) == oState) {
				int32_t bitCount = $Integer::bitCount(oState);
				if (bitCount > bestCount) {
					bestIndex = counter;
					bestCount = bitCount;
				}
			}
		}
		if (bestIndex != -1) {
			lastState->set(0, bestIndex);
			return states->get(bestIndex);
		}
		if (wildIndex != -1) {
			lastState->set(0, wildIndex);
			return states->get(wildIndex);
		}
	}
	$nc(lastState)->set(0, -1);
	return nullptr;
}

void clinit$NimbusStyle($Class* class$) {
	$assignStatic(NimbusStyle::LARGE_KEY, "large"_s);
	$assignStatic(NimbusStyle::SMALL_KEY, "small"_s);
	$assignStatic(NimbusStyle::MINI_KEY, "mini"_s);
	NimbusStyle::LARGE_SCALE = 1.15;
	NimbusStyle::SMALL_SCALE = 0.857;
	NimbusStyle::MINI_SCALE = 0.714;
	NimbusStyle::$assertionsDisabled = !NimbusStyle::class$->desiredAssertionStatus();
	$assignStatic(NimbusStyle::NULL, $Character::valueOf(u'\0'));
	$init($Color);
	$assignStatic(NimbusStyle::DEFAULT_COLOR, $new($ColorUIResource, $Color::BLACK));
	$assignStatic(NimbusStyle::STATE_COMPARATOR, $new($NimbusStyle$1));
}

NimbusStyle::NimbusStyle() {
}

$Class* NimbusStyle::load$($String* name, bool initialize) {
	$loadClass(NimbusStyle, name, initialize, &_NimbusStyle_ClassInfo_, clinit$NimbusStyle, allocate$NimbusStyle);
	return class$;
}

$Class* NimbusStyle::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax