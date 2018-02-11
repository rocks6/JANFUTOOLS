
#define NOT_REQUIRED 0
#define REQUIRED 1
#define TERMINATOR 2

#define UNKNOWN 0
#define INTERROGATIVE 1 // tazaci
#define IMPERATIVE 2 // rozkazovaci
#define INDICATIVE 3 // oznamovaci

#define FORMAT_SIMPLE 0
#define FORMAT_LIST 1

#define CONTEXT_DEFAULT 0
#define CONTEXT_PRONOMINAL 1

// Word classes.
#define WC_INDEFINITE       0 // ???
#define WC_NOUN             1 // podstatne jmeno
#define WC_ADJECTIVE        2 // pridavne jmeno
#define WC_PRONOUN          4 // zajmeno
#define WC_NUMERAL          8 // cislovka
#define WC_VERB            16 // sloveso
#define WC_ADVERB          32 // prislovce
#define WC_PREPOSITION     64 // predlozka
#define WC_CONJUNCTION    128 // spojka
#define WC_PARTICLE       256 // castice
#define WC_INTERJECTION   512 // citoslovce

#define FORM_DEFAULT                     0 // default is singular, no article, present time, infinitive
// Nouns.
#define FORM_PLURAL                      1 // singular is default
#define FORM_INDEFINITE_ARTICLE          2 // show indefinite article
#define FORM_DEFINITE_ARTICLE            4 // show definite article
// Verbs.
#define FORM_FIRST_PERSON                8
#define FORM_SECOND_PERSON              16
#define FORM_THIRD_PERSON               32
#define FORM_PAST_TENSE                 64
#define FORM_PAST_PARTICIPLE           128
#define FORM_PRESENT_TENSE             256
#define FORM_FUTURE_TENSE              512
#define FORM_CONDITIONAL_MOOD         1024
#define FORM_GERUND                   2048

identitiesDir = "KnowledgeBases\";
identitiesMask = "player*.kb";

rulesRoot = ofpBranch;

class CfgKBWords
{
	// Numbers are defined (particular float number is stored in text value - similar as WordIdCustomId):
	class WordIdScalarId
	{
		text = "X";
		spaceInFront = 1;
		wordClass = WC_NUMERAL;
	};

	class WordIdCustomId
	{
		text = "NULL";
		spaceInFront = 1;
		wordClass = WC_UNDEFINITE;
	};
	
	class WordIdPeriodId
	{
		text = ".";
		spaceInFront = 0;
		wordClass = WC_INDEFINITE;
	};
	
	class WordIdCommaId
	{
		text = ",";
		spaceInFront = 0;
		wordClass = WC_INDEFINITE;
	};
	
	class WordIdQuetionMarkId
	{
		text = "?";
		spaceInFront = 0;
		wordClass = WC_INDEFINITE;
	};
	
	class WordIdExclamationMarkId
	{
		text = "!";
		spaceInFront = 0;
		wordClass = WC_INDEFINITE;
	};
	
	class WordIdLeftBracketId
	{
		text = "(";
		spaceInFront = 1;
		neverSpaceBehind = 1;
		wordClass = WC_INDEFINITE;
	};
	
	class WordIdRightBracketId
	{
		text = ")";
		spaceInFront = 0;
		wordClass = WC_INDEFINITE;
	};
	
	class WordIdCancel
	{
		text = "cancel";
		spaceInFront = 1;
		wordClass = WC_VERB;
	};
	
	class WordIdAn
	{
		text = "an";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdA
	{
		text = "a";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdAnd
	{
		text = "and";
		spaceInFront = 1;
		wordClass = WC_CONJUNCTION;
	};
	
	class WordIdYes
	{
		text = "yes";
		spaceInFront = 1;
		wordClass = WC_NOUN;
	};
	
	class WordIdNo
	{
		text = "no";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_ADVERB + WC_PRONOUN + WC_INTERJECTION;
	};
	
	class WordIdWhat
	{
		text = "what";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_CONJUNCTION + WC_ADVERB;
	};
	
	class WordIdBe
	{
		text = "be";
		spaceInFront = 1;
		wordClass = WC_VERB;
		verbPresentTenseSingular1 = "am";
		verbPresentTenseSingular3 = "is";
		verbPresentTense = "are";
		verbPastTenseSingular = "was";
		verbPastTense = "were";
		verbPastParticiple = "been";
	};
	
	class WordIdYour
	{
		text = "your";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdName
	{
		text = "name";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_VERB + WC_ADJECTIVE;
	};
	
	class WordIdMy
	{
		text = "my";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
		//... Maybe 'my' and other pronouns should have their 'wordis' type (defined what can be in context)
		//    More probably context will be more general then this way - e.g. soldier must be in context too.
	};
	
	class WordIdWhere
	{
		text = "where";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_CONJUNCTION;
	};
	
	class WordIdWho
	{
		text = "who";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_CONJUNCTION;
	};
	
	class WordIdDo
	{
		text = "do";
		spaceInFront = 1;
		wordClass = WC_VERB;
		verbPresentTenseSingular3 = "does";
		verbPastTense = "did";
		verbPastParticiple = "done";
	};
	
	class WordIdYou
	{
		text = "you";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdKnow
	{
		text = "know";
		spaceInFront = 1;
		wordClass = WC_VERB + WC_NOUN + WC_INTERJECTION;
		verbPastTense = "knew";
		verbPastParticiple = "known";
	};
	
	class WordIdHave
	{
		text = "have";
		spaceInFront = 1;
		wordClass = WC_VERB;
		verbPresentTenseSingular3 = "has";
		verbPastTense = "had";
		verbPastParticiple = "had";
	};
	
	class WordIdIt
	{
		text = "it";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdTrue
	{
		text = "true";
		spaceInFront = 1;
		wordClass = WC_ADJECTIVE + WC_ADVERB + WC_NOUN + WC_VERB;
	};
	
	class WordIdThat
	{
		text = "that";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_ADVERB + WC_CONJUNCTION;
	};
	
	class WordIdSorry
	{
		text = "sorry";
		spaceInFront = 1;
		wordClass = WC_ADJECTIVE;
	};
	
	class WordIdI
	{
		text = "I";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdNot
	{
		text = "not";
		spaceInFront = 1;
		wordClass = WC_NOUN;
	};
	
	class WordIdUnderstand
	{
		text = "understand";
		spaceInFront = 1;
		wordClass = WC_VERB;
		verbPastTense = "understood";
		verbPastParticiple = "understood";
	};
	
	class WordIdHis
	{
		text = "his";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdHer
	{
		text = "her";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdHow
	{
		text = "how";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_CONJUNCTION + WC_ADVERB + WC_NOUN;
	};
	
	class WordIdMany
	{
		text = "many";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_ADVERB;
	};
	
	class WordIdSee
	{
		text = "see";
		spaceInFront = 1;
		wordClass = WC_VERB;
		verbPastTense = "saw";
		verbPastParticiple = "seen";
	};
	
	class WordIdEnemy
	{
		text = "enemy";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_ADJECTIVE;
	};
	
	class WordIdTank
	{
		text = "tank";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "tank";
	};
	
	class WordIdCamel
	{
		text = "camel";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "camel";
	};
	
	class WordIdSoldier
	{
		text = "soldier";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_VERB;
		semanticKey = "soldier";
	};
	
	class WordIdAeroplane
	{
		text = "aeroplane";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "aeroplane";
	};
	
	class WordIdIn
	{
		text = "in";
		spaceInFront = 1;
		wordClass = WC_PREPOSITION + WC_ADVERB + WC_ADJECTIVE;
	};
	
	class WordIdLast
	{
		text = "last";
		spaceInFront = 1;
		wordClass = WC_PRONOUN + WC_ADJECTIVE + WC_ADVERB + WC_NUMERAL + WC_NOUN + WC_VERB;
	};
	
	class WordIdMinute
	{
		text = "minute";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_VERB + WC_ADJECTIVE;
	};
	
	class WordIdHour
	{
		text = "hour";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		nounArticle = WordIdAn;
	};
	
	class WordIdIts
	{
		text = "its";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdTheir
	{
		text = "their";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdEntity
	{
		text = "entity";
		spaceInFront = 1;
		wordClass = WC_NOUN;
	};
	
	class WordIdTarget
	{
		text = "target";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_VERB;
	};
	
	class WordIdWeapon
	{
		text = "weapon";
		spaceInFront = 1;
		wordClass = WC_NOUN;
	};
	
	class WordIdHuman
	{
		text = "human";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_ADJECTIVE;
	};
	
	class WordIdMusician
	{
		text = "musician";
		spaceInFront = 1;
		wordClass = WC_NOUN;
	};
	
	class WordIdMan
	{
		text = "man";
		spaceInFront = 1;
		wordClass = WC_NOUN + WC_VERB;
		verbPastTense = "manned";
		verbPastParticiple = "manned";
		verbGerund = "manning";
		nounPlural = "men";
	};
	
	class WordIdNothing
	{
		text = "nothing";
		spaceInFront = 1;
		wordClass = WC_PRONOUN;
	};
	
	class WordIdMale
	{
		text = "male";
		spaceInFront = 1;
		wordClass = WC_ADJECTIVE + WC_NOUN;
	};
	
	class WordIdFemale
	{
		text = "female";
		spaceInFront = 1;
		wordClass = WC_ADJECTIVE + WC_NOUN;
	};
	
	class WordIdMontignac
	{
		text = "Montignac";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "Montignac";
	};
	
	class WordIdPrague
	{
		text = "Prague";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "Prague";
	};
	
	class WordIdBratislava
	{
		text = "Bratislava";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "Bratislava";
	};
	
	class WordIdKrakow
	{
		text = "Krakow";
		spaceInFront = 1;
		wordClass = WC_NOUN;
		semanticKey = "Krakow";
	};
};

class CfgKBRules
{
	class ofpBranch
	{
		description = "sentence";
		rules[] =
		{
			whatIsYourNameRule, 
			haveYouSeenEnemyRule
		};
	};
	
	class haveYouSeenEnemyRule
	{
		mood = INTERROGATIVE;
		phraseParts[] = 
		{
			{WordIdHave, FORM_DEFAULT},
			{WordIdYou, FORM_DEFAULT},
			{WordIdSee, FORM_PAST_PARTICIPLE},
			{WordIdEnemy, FORM_DEFAULT},
			{unitsBranch, NOT_REQUIRED},
			{inPlaceBranch, NOT_REQUIRED},
			{inLastTimeBranch, NOT_REQUIRED},
		};
		context = CONTEXT_DEFAULT;
		class result
		{
			/* //...
			*/
			class result_100
			{
				threshold = 1.0;
				sentence = Yes_I_did_Sentence;
			};
			class result_75
			{
				threshold = 0.75;
				sentence = I_saw_XXX_Sentence;
				format = FORMAT_LIST;
				valuesFormat = FORMAT_SIMPLE;
				values[] = 
				{
					"unitType",
				};
				/*
				//... is waiting
				class format
				{
					type = FORMAT_LIST;
					categories[] =
					{
						{""},
						{"unitType", 5}, // maximum dovolenych polozek v seznamu
					};
				};
				*/
			};
			class result_0
			{
				threshold = 0.0;
				sentence = No_I_did_not_Sentence;
			};
		};
		conditions[] =
		{
			{ "(_player Search ""side"") IsEnemy (_candidate Search ""side"")", 1.0 },
		};
	};
	
	class unitsBranch
	{
		description = "units";
		rules[] = 
		{
			{WordIdTank, FORM_PLURAL},
			{WordIdSoldier, FORM_PLURAL},
			{WordIdAeroplane, FORM_PLURAL},
		};
		variable = _unitType;
		conditions[] =
		{
			{ "(_candidate Search ""unitType"") Compare _unitType", 0.8 },
		};
	};
	
	class inPlaceBranch
	{
		description = "where";
		rules[] = {inPlaceRule};
	};

	class inPlaceRule
	{
		phraseParts[] = 
		{
			{WordIdIn, FORM_DEFAULT},
			{placeBranch, REQUIRED},
		};
	};

	class placeBranch
	{
		description = "place";
		rules[] = 
		{
			{WordIdMontignac, FORM_DEFAULT},
			{WordIdPrague, FORM_DEFAULT},
			{WordIdBratislava, FORM_DEFAULT},
			{WordIdKrakow, FORM_DEFAULT},
		};
		variable = _place;
		conditions[] =
		{
			{ "(_candidate Search ""lastSeenPlace"") IsNear _place", 1.0 },
		};
	};
	
	class inLastTimeBranch
	{
		description = "when";
		rules[] = {inLastTimeRule};
	};
	
	class inLastTimeRule
	{
		phraseParts[] = 
		{
			{WordIdIn, FORM_DEFAULT},
			{WordIdLast, FORM_DEFAULT},
			{timeValueBranch, REQUIRED},
		};
	};
	
	class timeValueBranch
	{
		description = "time";
		rules[] = {minuteRule, xMinutesRule, hourRule, xHoursRule};
	};
	
	class minuteRule
	{
		phraseParts[] = 
		{
			{WordIdMinute, FORM_DEFAULT},
		};
		conditions[] =
		{
			{ "(_candidate Search ""lastSeenTime"") IsInLastSecs 60", 1.0 },
		};
	};
	
	class hourRule
	{
		phraseParts[] = 
		{
			{WordIdHour, FORM_DEFAULT, 0},
		};
		conditions[] =
		{
			{ "(_candidate Search ""lastSeenTime"") IsInLastSecs 3600", 1.0 },
		};
	};
	
	class xMinutesRule
	{
		phraseParts[] = 
		{
			{numbers_2_3_5_10_15_30_45_Branch, REQUIRED},
			{WordIdMinute, FORM_PLURAL},
		};
	};
	
	class numbers_2_3_5_10_15_30_45_Branch
	{
		description = "x";
		rules[] = {2, 3, 5, 10, 15, 30, 45};
		variable = _minutes;
		conditions[] =
		{
			{ "(_candidate Search ""lastSeenTime"") IsInLastSecs (_minutes * 60)", 1.0 },
		};
	};
	
	class xHoursRule
	{
		phraseParts[] = 
		{
			{numbers_2_3_4_5_6_12_24_48_Branch, REQUIRED},
			{WordIdHour, FORM_PLURAL},
		};
	};
	
	class numbers_2_3_4_5_6_12_24_48_Branch
	{
		description = "x";
		rules[] = {2, 3, 5, 6, 12, 24, 48};
		variable = _hours;
		conditions[] =
		{
			{ "(_candidate Search ""lastSeenTime"") IsInLastSecs (_hours * 3600)", 1.0 },
		};
	};
	
	class whatIsYourNameRule
	{
		mood = INTERROGATIVE;
		phraseParts[] = 
		{
			{WordIdWhat, FORM_DEFAULT},
			{WordIdBe, FORM_THIRD_PERSON + FORM_PRESENT_TENSE},
			{whoseBranch, REQUIRED},
			{WordIdName, FORM_DEFAULT},
		};
		context = CONTEXT_PRONOMINAL; // zajmenny
		class result
		{
			class result_100
			{
				threshold = 1.0; // Pokud jsou podminky splneny alespon na ...
				sentence = XXX_name_is_XXX_Sentence;
				format = FORMAT_LIST;
				valuesFormat = FORMAT_SIMPLE;
				values[] = 
				{
					"firstName",
					"lastName",
				};
			};
			class result_0
			{
				threshold = 0.0;
				sentence = I_do_not_understand_Sentence;
			};
    };
    conditions[] =
    {
      { "_candidate Has ""firstName""", 1.0},
      { "_candidate Has ""lastName""", 1.0},
    };
  };

  class whoseBranch
  {
    description="whose";
    rules[] = {WordIdYour, WordIdHis, WordIdHer, WordIdIts, WordIdTheir};
    variable = "_whose";
    conditions[] =
    {
      { "_candidate Is _whose", 1.0},
    };
  };
};

class CfgKBResponses
{
  class XXX_name_is_XXX_Sentence
  {
    mood = INDICATIVE;
    parts[] = 
    {
      _whose, // pokud jde o promennou a je kontext zajmenny, pokusim se ji TransformIncomingToOutcoming
        WordIdName,
      {WordIdBe, FORM_THIRD_PERSON + FORM_PRESENT_TENSE},
      {_result, FORM_DEFAULT},
    };
  };

  class I_do_not_understand_Sentence
  {
    mood = INDICATIVE;
    parts[] = 
    {
      WordIdI,
        WordIdDo,
        WordIdNot,
        WordIdUnderstand,
    };
  };

  class I_saw_XXX_Sentence
  {
    mood = INDICATIVE;
    parts[] = 
    {
      WordIdI,
      {WordIdSee, FORM_PAST_TENSE},
      {_result, FORM_DEFAULT},
    };
  };

  class No_I_did_not_Sentence
  {
    mood = INDICATIVE;
    parts[] = 
    {
      WordIdNo,
        WordIdCommaId,
        WordIdI,
      {WordIdDo, FORM_PAST_TENSE},
      WordIdNot,
    };
  };

  class Yes_I_did_Sentence
  {
    mood = INDICATIVE;
    parts[] = 
    {
      WordIdYes,
        WordIdCommaId,
        WordIdI,
      {WordIdDo, FORM_PAST_TENSE},
    };
  };
};

class CfgKBPlayer
{
  class _this
  {
    side = czech;
  };
  class obj0
  {
  };
  class obj1
  {
  };
};
