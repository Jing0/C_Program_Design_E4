/*
 * =====================================================================================
 *
 *       Filename:  Eliza.c
 *
 *    Description:  This is Eliza written in C.
 *    Eliza is a very first chatbot.
 *
 *        Version:  0.1
 *        Created:  03/22/2014 23:00:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo, j.kuo2012@gmail.com,http://jackiekuo.com
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
int main(){
	char input[100];
	void eliza(char input[]);
	printf("I am the psychotherapist.  Please, describe your problems.  Each time
you are finished talking, type RET.");
	for(;;){	
		printf("> ");
		scanf("%s",input);
		eliza(input);
	}
	return 0;
}
void eliza(char input[]){
	//keyword map
	int ifexist(char keyword[],char input[]);
	ifexist(input,keyword){
		random;
		printf();

	}
}
int ifexist(char keyword[],char input[]){
	;
	if(){
		return 0;
	}
	else
		return 0;
}
int random(int n){
	;
}

/* abort aborted aborts ask asked asks am
    applied applies apply are associate
           associated ate
           be became become becomes becoming
           been being believe believed believes
           bit bite bites bore bored bores boring bought buy buys buying
           call called calling calls came can caught catch come
           contract contracted contracts control controlled controls
           could croak croaks croaked cut cuts
           dare dared define defines dial dialed dials did die died dies
           dislike disliked
           dislikes do does drank drink drinks drinking
           drive drives driving drove dying
           eat eating eats expand expanded expands
           expect expected expects expel expels expelled
           explain explained explains
           fart farts feel feels felt fight fights find finds finding
           forget forgets forgot fought found
           fuck fucked fucking fucks
           gave get gets getting give gives go goes going gone got gotten
           had harm harms has hate hated hates have having
           hear heard hears hearing help helped helping helps
           hit hits hope hoped hopes hurt hurts
           implies imply is
           join joined joins jump jumped jumps
           keep keeping keeps kept
           kill killed killing kills kiss kissed kisses kissing
           knew know knows
           laid lay lays let lets lie lied lies like liked likes
           liking listen listens
           login look looked looking looks
           lose losing lost
           love loved loves loving
           luse lusing lust lusts
           made make makes making may mean means meant might
           move moved moves moving must
           need needed needs
           order ordered orders ought
           paid pay pays pick picked picking picks
           placed placing prefer prefers put puts
           ran rape raped rapes
           read reading reads recall receive received receives
           refer refered referred refers
           relate related relates remember remembered remembers
           romp romped romps run running runs
           said sang sat saw say says
           screw screwed screwing screws scrod see sees seem seemed
           seems seen sell selling sells
           send sendind sends sent shall shoot shot should
           sing sings sit sits sitting sold studied study
           take takes taking talk talked talking talks tell tells telling
           think thinks
           thought told took tooled touch touched touches touching
           transfer transferred transfers transmit transmits transmitted
           type types types typing
           walk walked walking walks want wanted wants was watch
           watched watching went were will wish would work worked works
           write writes writing wrote use used uses using)
	   */

/*
 * 
(doctor-put-meaning howdy 'howdy)
(doctor-put-meaning hi 'howdy)
(doctor-put-meaning greetings 'howdy)
(doctor-put-meaning hello 'howdy)
(doctor-put-meaning tops20 'mach)
(doctor-put-meaning tops-20 'mach)
(doctor-put-meaning tops 'mach)
(doctor-put-meaning pdp11 'mach)
(doctor-put-meaning computer 'mach)
(doctor-put-meaning unix 'mach)
(doctor-put-meaning machine 'mach)
(doctor-put-meaning computers 'mach)
(doctor-put-meaning machines 'mach)
(doctor-put-meaning pdp11s 'mach)
(doctor-put-meaning foo 'mach)
(doctor-put-meaning foobar 'mach)
(doctor-put-meaning multics 'mach)
(doctor-put-meaning macsyma 'mach)
(doctor-put-meaning teletype 'mach)
(doctor-put-meaning la36 'mach)
(doctor-put-meaning vt52 'mach)
(doctor-put-meaning zork 'mach)
(doctor-put-meaning trek 'mach)
(doctor-put-meaning startrek 'mach)
(doctor-put-meaning advent 'mach)
(doctor-put-meaning pdp 'mach)
(doctor-put-meaning dec 'mach)
(doctor-put-meaning commodore 'mach)
(doctor-put-meaning vic 'mach)
(doctor-put-meaning bbs 'mach)
(doctor-put-meaning modem 'mach)
(doctor-put-meaning baud 'mach)
(doctor-put-meaning macintosh 'mach)
(doctor-put-meaning vax 'mach)
(doctor-put-meaning vms 'mach)
(doctor-put-meaning ibm 'mach)
(doctor-put-meaning pc 'mach)
(doctor-put-meaning bitching 'foul)
(doctor-put-meaning shit 'foul)
(doctor-put-meaning bastard 'foul)
(doctor-put-meaning damn 'foul)
(doctor-put-meaning damned 'foul)
(doctor-put-meaning hell 'foul)
(doctor-put-meaning suck 'foul)
(doctor-put-meaning sucking 'foul)
(doctor-put-meaning sux 'foul)
(doctor-put-meaning ass 'foul)
(doctor-put-meaning whore 'foul)
(doctor-put-meaning bitch 'foul)
(doctor-put-meaning asshole 'foul)
(doctor-put-meaning shrink 'foul)
(doctor-put-meaning pot 'toke)
(doctor-put-meaning grass 'toke)
(doctor-put-meaning weed 'toke)
(doctor-put-meaning marijuana 'toke)
(doctor-put-meaning acapulco 'toke)
(doctor-put-meaning columbian 'toke)
(doctor-put-meaning tokin 'toke)
(doctor-put-meaning joint 'toke)
(doctor-put-meaning toke 'toke)
(doctor-put-meaning toking 'toke)
(doctor-put-meaning tokin\' 'toke)
(doctor-put-meaning toked 'toke)
(doctor-put-meaning roach 'toke)
(doctor-put-meaning pills 'drug)
(doctor-put-meaning dope 'drug)
(doctor-put-meaning acid 'drug)
(doctor-put-meaning lsd 'drug)
(doctor-put-meaning speed 'drug)
(doctor-put-meaning heroin 'drug)
(doctor-put-meaning hash 'drug)
(doctor-put-meaning cocaine 'drug)
(doctor-put-meaning uppers 'drug)
(doctor-put-meaning downers 'drug)
(doctor-put-meaning loves 'loves)
(doctor-put-meaning love 'love)
(doctor-put-meaning loved 'love)
(doctor-put-meaning hates 'hates)
(doctor-put-meaning dislikes 'hates)
(doctor-put-meaning hate 'hate)
(doctor-put-meaning hated 'hate)
(doctor-put-meaning dislike 'hate)
(doctor-put-meaning stoned 'state)
(doctor-put-meaning drunk 'state)
(doctor-put-meaning drunken 'state)
(doctor-put-meaning high 'state)
(doctor-put-meaning horny 'state)
(doctor-put-meaning blasted 'state)
(doctor-put-meaning happy 'state)
(doctor-put-meaning paranoid 'state)
(doctor-put-meaning wish 'desire)
(doctor-put-meaning wishes 'desire)
(doctor-put-meaning want 'desire)
(doctor-put-meaning desire 'desire)
(doctor-put-meaning like 'desire)
(doctor-put-meaning hope 'desire)
(doctor-put-meaning hopes 'desire)
(doctor-put-meaning desires 'desire)
(doctor-put-meaning wants 'desire)
(doctor-put-meaning desires 'desire)
(doctor-put-meaning likes 'desire)
(doctor-put-meaning needs 'desire)
(doctor-put-meaning need 'desire)
(doctor-put-meaning frustrated 'mood)
(doctor-put-meaning depressed 'mood)
(doctor-put-meaning annoyed 'mood)
(doctor-put-meaning upset 'mood)
(doctor-put-meaning unhappy 'mood)
(doctor-put-meaning excited 'mood)
(doctor-put-meaning worried 'mood)
(doctor-put-meaning lonely 'mood)
(doctor-put-meaning angry 'mood)
(doctor-put-meaning mad 'mood)
(doctor-put-meaning pissed 'mood)
(doctor-put-meaning jealous 'mood)
(doctor-put-meaning afraid 'fear)
(doctor-put-meaning terrified 'fear)
(doctor-put-meaning fear 'fear)
(doctor-put-meaning scared 'fear)
(doctor-put-meaning frightened 'fear)
(doctor-put-meaning virginity 'sexnoun)
(doctor-put-meaning virgins 'sexnoun)
(doctor-put-meaning virgin 'sexnoun)
(doctor-put-meaning cock 'sexnoun)
(doctor-put-meaning cocks 'sexnoun)
(doctor-put-meaning dick 'sexnoun)
(doctor-put-meaning dicks 'sexnoun)
(doctor-put-meaning cunt 'sexnoun)
(doctor-put-meaning cunts 'sexnoun)
(doctor-put-meaning prostitute 'sexnoun)
(doctor-put-meaning condom 'sexnoun)
(doctor-put-meaning sex 'sexnoun)
(doctor-put-meaning rapes 'sexnoun)
(doctor-put-meaning wife 'family)
(doctor-put-meaning family 'family)
(doctor-put-meaning brothers 'family)
(doctor-put-meaning sisters 'family)
(doctor-put-meaning parent 'family)
(doctor-put-meaning parents 'family)
(doctor-put-meaning brother 'family)
(doctor-put-meaning sister 'family)
(doctor-put-meaning father 'family)
(doctor-put-meaning mother 'family)
(doctor-put-meaning husband 'family)
(doctor-put-meaning siblings 'family)
(doctor-put-meaning grandmother 'family)
(doctor-put-meaning grandfather 'family)
(doctor-put-meaning maternal 'family)
(doctor-put-meaning paternal 'family)
(doctor-put-meaning stab 'death)
(doctor-put-meaning murder 'death)
(doctor-put-meaning murders 'death)
(doctor-put-meaning suicide 'death)
(doctor-put-meaning suicides 'death)
(doctor-put-meaning kill 'death)
(doctor-put-meaning kills 'death)
(doctor-put-meaning killing 'death)
(doctor-put-meaning die 'death)
(doctor-put-meaning dies 'death)
(doctor-put-meaning died 'death)
(doctor-put-meaning dead 'death)
(doctor-put-meaning death 'death)
(doctor-put-meaning deaths 'death)
(doctor-put-meaning pain 'symptoms)
(doctor-put-meaning ache 'symptoms)
(doctor-put-meaning fever 'symptoms)
(doctor-put-meaning sore 'symptoms)
(doctor-put-meaning aching 'symptoms)
(doctor-put-meaning stomachache 'symptoms)
(doctor-put-meaning headache 'symptoms)
(doctor-put-meaning hurts 'symptoms)
(doctor-put-meaning disease 'symptoms)
(doctor-put-meaning virus 'symptoms)
(doctor-put-meaning vomit 'symptoms)
(doctor-put-meaning vomiting 'symptoms)
(doctor-put-meaning barf 'symptoms)
(doctor-put-meaning toothache 'symptoms)
(doctor-put-meaning hurt 'symptoms)
(doctor-put-meaning rum 'alcohol)
(doctor-put-meaning gin 'alcohol)
(doctor-put-meaning vodka 'alcohol)
(doctor-put-meaning alcohol 'alcohol)
(doctor-put-meaning bourbon 'alcohol)
(doctor-put-meaning beer 'alcohol)
(doctor-put-meaning wine 'alcohol)
(doctor-put-meaning whiskey 'alcohol)
(doctor-put-meaning scotch 'alcohol)
(doctor-put-meaning fuck 'sexverb)
(doctor-put-meaning fucked 'sexverb)
(doctor-put-meaning screw 'sexverb)
(doctor-put-meaning screwing 'sexverb)
(doctor-put-meaning fucking 'sexverb)
(doctor-put-meaning rape 'sexverb)
(doctor-put-meaning raped 'sexverb)
(doctor-put-meaning kiss 'sexverb)
(doctor-put-meaning kissing 'sexverb)
(doctor-put-meaning kisses 'sexverb)
(doctor-put-meaning screws 'sexverb)
(doctor-put-meaning fucks 'sexverb)
(doctor-put-meaning because 'conj)
(doctor-put-meaning but 'conj)
(doctor-put-meaning however 'conj)
(doctor-put-meaning besides 'conj)
(doctor-put-meaning anyway 'conj)
(doctor-put-meaning that 'conj)
(doctor-put-meaning except 'conj)
(doctor-put-meaning why 'conj)
(doctor-put-meaning how 'conj)
(doctor-put-meaning until 'when)
(doctor-put-meaning when 'when)
(doctor-put-meaning whenever 'when)
(doctor-put-meaning while 'when)
(doctor-put-meaning since 'when)
(doctor-put-meaning rms 'rms)
(doctor-put-meaning stallman 'rms)
(doctor-put-meaning school 'school)
(doctor-put-meaning schools 'school)
(doctor-put-meaning skool 'school)
(doctor-put-meaning grade 'school)
(doctor-put-meaning grades 'school)
(doctor-put-meaning teacher 'school)
(doctor-put-meaning teachers 'school)
(doctor-put-meaning classes 'school)
(doctor-put-meaning professor 'school)
(doctor-put-meaning prof 'school)
(doctor-put-meaning profs 'school)
(doctor-put-meaning professors 'school)
(doctor-put-meaning mit 'school)
(doctor-put-meaning emacs 'eliza)
(doctor-put-meaning eliza 'eliza)
(doctor-put-meaning liza 'eliza)
(doctor-put-meaning elisa 'eliza)
(doctor-put-meaning weizenbaum 'eliza)
(doctor-put-meaning doktor 'eliza)
(doctor-put-meaning athletics 'sports)
(doctor-put-meaning baseball 'sports)
(doctor-put-meaning basketball 'sports)
(doctor-put-meaning football 'sports)
(doctor-put-meaning frisbee 'sports)
(doctor-put-meaning gym 'sports)
(doctor-put-meaning gymnastics 'sports)
(doctor-put-meaning hockey 'sports)
(doctor-put-meaning lacrosse 'sports)
(doctor-put-meaning soccer 'sports)
(doctor-put-meaning softball 'sports)
(doctor-put-meaning sports 'sports)
(doctor-put-meaning swimming 'sports)
(doctor-put-meaning swim 'sports)
(doctor-put-meaning tennis 'sports)
(doctor-put-meaning volleyball 'sports)
(doctor-put-meaning math 'math)
(doctor-put-meaning mathematics 'math)
(doctor-put-meaning mathematical 'math)
(doctor-put-meaning theorem 'math)
(doctor-put-meaning axiom 'math)
(doctor-put-meaning lemma 'math)
(doctor-put-meaning algebra 'math)
(doctor-put-meaning algebraic 'math)
(doctor-put-meaning trig 'math)
(doctor-put-meaning trigonometry 'math)
(doctor-put-meaning trigonometric 'math)
(doctor-put-meaning geometry 'math)
(doctor-put-meaning geometric 'math)
(doctor-put-meaning calculus 'math)
(doctor-put-meaning arithmetic 'math)
(doctor-put-meaning zippy 'zippy)
(doctor-put-meaning zippy 'zippy)
(doctor-put-meaning pinhead 'zippy)
(doctor-put-meaning chat 'chat)
*/
