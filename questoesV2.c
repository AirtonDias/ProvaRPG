# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <ctype.h>
# include <windows.h>

void tela_titulo(void) {
	system("cls");
	setTextColor (6);
	printf ("\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|                       UMA AVALIA%c%cO DA GEST%cO DE PROCESSOS                     |\n\
|                                                                                |\n\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|                                                                                |\n\
|                                                                                |\n\
|          Escolha (#) uma das op%c%ces:                                           |\n\
|                                                                                |\n\
|                                                                                |\n\
|                                                                                |\n\
|         1) Prova 1: Gest%co de processos em organiza%c%co p%cblica                 |\n\
|         2) Prova 2: Gest%co de processos em organiza%c%co privada                 |\n\
|         3) Sobre o jogo (LEIA-ME)                                              |\n\
|         4) Fechar o programa                                                   |\n\
|                                                                                |\n\
|Este trabalho foi realizado por:                                                |\n\
|                                                                                |\n\
|Airton                                                                          |\n\
|Glaucos                                                                         |\n\
|Rosana                                                                          |\n\
|Vitor                                                                           |\n\
|                                                                                |\n\
|                                      2024                                      |\n\
+--------------------------------------------------------------------------------+\n\
", 128, 199, 199, 135, 228, 198, 135, 198, 163, 198, 135, 198);
	setTextColor(7);
}

void instrucoes (void) {
	system("cls");
	setTextColor (2);
	printf ("\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|                                 SOBRE O JOGO                                   |\n\
|                                                                                |\n\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|                                                                                |\n\
|    ESTE JOGO FOI DESENVOLVIDO COMO AVALIACAO NA DISCIPLINA 'MICROINFORMATICA   |\n\
| APLICADA', LECIONADA PELO PROF. MARCELO AOKI, EM 2024.                         |\n\
|    O JOGO BUSCA INSTIGAR A APRENDIZAGEM DE CONCEITOS REFERENTES A GESTAO DE    |\n\
| PROCESSOS, NO ENTANTO, ELE POSSUI CARATER LUDICO, SENDO ASSIM SEU SISTEMA DE   |\n\
| PONTUACAO NAO NECESSARIAMENTE CONDIZ COM A REALIDADE (NAO TENTE APLICAR        |\n\
| NOSSAS RESPOSTAS A SUA EMPRESA!!).                                             |\n\
|                                                                                |\n\
|                                                                                |\n\
|    AS QUESTOES FORAM FORMULADAS A PARTIR DA LEITURA DOS SEGUINTES TEXTOS:      |\n\
|                                                                                |\n\
|   RAINER JR, R. Kelly; CEGIELSKI, Casey G. Introducao a Sistemas de            |\n\
|   informacao. 5ª ed. Rio de Janeiro: ELSEVIER, 2016.                           |\n\
|                                                                                |\n\
|   GONCALVES, Jose Ernesto Lima. As empresas sao grandes colecoes de processos. |\n\
|   RAE Revista de Administracao de Empresas, v.40, n.1, p. 6-19, jan/mar 2000.  |\n\
|                                                                                |\n\
|                                                                                |\n\
|                                (CONTINUA) 1/3                                  |\n\
+--------------------------------------------------------------------------------+\n\
");
	system("PAUSE");
	system("cls");
	printf ("\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|                                 SOBRE O JOGO                                   |\n\
|                                                                                |\n\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|    O JOGO CONTA COM UM SISTEMA DE PONTUACAO QUE CONSISTE EM 3 PARAMETROS       |\n\
|    EM UMA ESCALA DE 0 A 100 PONTOS CADA:                                       |\n\
|                                                                                |\n\
|    A) DINHEIRO;                                                                |\n\
|    B) EFICIENCIA DO PROCESSO;                                                  |\n\
|    C) EFICACIA DO PROCESSO;                                                    |\n\
|                                                                                |\n\
|    CADA DECISAO DO USUARIO TRARA ACRESCIMO OU DECRESCIMO A CADA PARAMETRO.     |\n\
|    PORTANTO, OS VALORES SAO RELATIVOS AO VALOR INICIAL (50) DE CADA UM DELES.  |\n\
|                                                                                |\n\
|    O OBJETIVO DO JOGO:                                                         |\n\
|    OBTER A MAIOR PONTUACAO POSSIVEL EM CADA PARAMETRO. SE, AO FINAL, O USUARIO |\n\
|    ACUMULAR 75 PONTOS, NO MINIMO, NOS 3 PARAMETROS, ISTO SIMBOLIZA QUE ELE(A)	 |\n\
|    FEZ ESCOLHAS BEM-SUCEDIDAS.                                                 |\n\
|                                                                                |\n\
|    LEMBRE-SE: NAO HA QUESTOES TOTALMENTE CERTAS OU ERRADAS. NO ENTANTO, HA	 |\n\
|    ALGUMAS QUE SAO MAIS BENEFICAS OU PREJUDICIAIS A UM OU OUTRO PARAMETRO.     |\n\
|                                                                                |\n\
|                                (CONTINUA) 2/3                                  |\n\
+--------------------------------------------------------------------------------+\n\
");
	system("PAUSE");
	system("cls");
	printf ("\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|                                 SOBRE O JOGO                                   |\n\
|                                                                                |\n\
+--------------------------------------------------------------------------------+\n\
|                                                                                |\n\
|    O JOGO CONSISTE EM DUAS PARTES DE 10 QUESTOES CADA:                         |\n\
|                                                                                |\n\
|   PROVA 1: GESTAO PUBLICA                                                      |\n\
| ---- AQUI O PROGRAMA SIMULA O USUARIO DENTRO DA GESTAO DE UM MUNICIPIO.        |\n\
| O DINHEIRO REPERESENTA A ECONOMIA NA APLICACAO DE RECURSOS PUBLICOS, A         |\n\
| EFICIENCIA DOS PROCESSOS TRADUZ-SE NA CONFIABILIDADE DA GESTAO, ENQUANTO A     |\n\
| EFICACIA CORRESPONDE AO BOM RESULTADO DO PROCESSOS E SEU IMPACTO NA VIDA DOS   |\n\
| MORADORES.                                                                     |\n\
|                                                                                |\n\
|   PROVA 2: GESTAO PRIVADA                                                      |\n\
| ---- AQUI O PROGRAMA SIMULA O USUARIO DENTRO DA GESTAO DE UMA EMPRESA.         |\n\
| O PARAMETRO DINHEIRO REFERE-SE AOS CUSTO-BENEFICIO NA IMPLANTACAO DAS DECISOES,|\n\
| EFICIENCIA REFLETE A OTIMIZACAO DO PROCESSO E EFICACIA SE A DECISAO ATINGE O   |\n\
| RESULTADO ESPERADO DE SAIDA.                                                   |\n\
|                                                                                |\n\
|                                                                                |\n\
|                          3/3  (RETORNA A TELA TITULO)                          |\n\
+--------------------------------------------------------------------------------+\n\
");
	system("PAUSE");
	setTextColor(7);	
}

void fechamento (int pts1, int pts2, int pts3) {
	setTextColor(15);
	printf ("Sua pontua%c%co final foi de (%d) em Caixa ($), (%d) de Efici%cncia e (%d) Efic%ccia.\n\n", 135, 198, pts1, pts2, 136, pts3, 160);
	if (pts1 >= 75 && pts2 >= 75 && pts3 >= 75)
		printf ("Parab%cns! Voc%c obteve ao menos 75 pontos nos 3 par%cmetros e, com isso, obteve sucesso total no question%crio!\n\n", 130, 136, 131, 160);
	else {
		if (pts1 <= 75 && pts2 <= 75 && pts3 <= 75)
			printf ("Voc%c obteve menos de 75 pontos nos 3 par%cmetros. Infelizmente seu desempenho foi insatisfat%crio, tente novamente.\n\n", 136, 131, 162);
		else
			printf ("Voc%c obteve ao menos 75 pontos em algum par%cmetro, mas n%co em todos. Seu sucesso foi parcial, h%c espa%co para melhorar.\n\n", 136, 131, 198, 160, 135);
	}
	setTextColor(7);
	system("PAUSE");
	system("cls");
}

void exibe_questao_1 (int questao_n) { // Banco de questões a serem exibidas
	switch (questao_n) {
		case 1 : {
			printf ("\nQuest%co 1) \n\n\
Voc%c agora trabalha em uma nova gest%co municipal e, portanto, deve lidar com a Lei Or%cament%cria\n\
Anual aprovada no ano anterior. Sabe-se que h%c gastos recorrentes e outros que podem ocorrer de forma\n\
imprevista, mas em ambos casos h%c contratos com fornecedores. Infelizmente, a organiza%c%co processual\n\
n%co foi preocupa%c%co das gest%ces anteriores e os dados est%co dispersos e de dif%ccil acesso.\n\n\
Sabendo que o processo 'contas a pagar' %c um 'processo transfuncional' (RAINER, p. 35), pois abrange\n\
todas as secretarias municipais, empresas, funda%c%ces e autarquias municipais, qual op%c%co abaixo poderia\n\
ser implementado pela prefeitura, a fim de fornecer ao gestor da Secretaria da Fazenda uma vis%co da\n\
totalidade do quadro de pagamentos e estabelecer uma ordem de prioridades nos pagamentos.\n\n\
Nota: Lembre-se que o or%camento permite apenas o desenvolvimento de apenas uma destas op%c%ces, a princ%cpio,\n\
mas outras poderiam ser integradas posteriormente. Escolha a que voc%c achar mais priorit%cria.\n\n", 198, 136, 198, 135,\
160, 160, 160, 135, 198, 198, 135, 198, 228, 198, 161, 130, 135, 228, 135, 198, 198, 135, 135, 228, 161, 136, 160);
			system("PAUSE");
			printf ("\nA) Cada secretaria, autarquia, funda%c%co e empresa p%cblica possuiria seu sistema interno pr%cprio simples\n\
(Sistemas Quadro) com todos os seus processos gerenciais, como recursos humanos e finan%cas.\n\
No entanto, ds dados enviados %c Secretaria da Fazenda seriam mapeados, processados e enviados\n\
manualmente segundo a discri%c%co de cada gest%co secretarial e obrigatoriedades impostas pela Fazenda. A\n\
entrada de dados por agentes externos seria descentralizada.\n\n\
B) Todos os processos de finan%cas da cidade seriam centralizados em um sistema municipal interno (Sistema\n\
%cbaco), portanto haveria padroniza%c%co de dados inseridos relativos a este processo, como subprocessos de\n\
empenho, dados com prazos de pagamento etc. Mas a entrada de dados por agentes externos ainda seria descentralizada.\n\n\
C) Os 'CNPJs' fornecedores teriam acesso a um sistema externo (o site Fornece.gov) para inscri%c%co como empresa\n\
apta a realizar licita%c%ces, envio de notas fiscais, documentos relativos a concorr%cncias, acompanhamento de\n\
processos, requisi%c%co de aditivos etc. As solicita%c%ces, no entanto, seriam analisadas e processadas por\n\
trabalho humano que poderia envolver mais de um %crg%co ou entidade.\n\n\
D) Estabelecer um Centro de Atendimento e Protocolo aos Fornecedores na Secretaria da Fazenda. Seria um meio\n\
termo entre as op%c%ces B e C, pois teria implementa%c%co mais barata por ser em espa%co f%csico j%c existente\n\
e, com isso, poderia ser feito em paralelo com a automatiza%c%co e padroniza%c%co de subprocessos centralizados\n\
na Fazenda a partir de dados enviados por cada %crg%co ou entidade municipal, o que otimizaria o tempo de resposta\n\
ao usu%crio.\n\n\
E) Destacar um funcion%crio em cada %crg%co e entidade como respons%cvel para relacionamentos externos com\n\
fornecedores e internos com a Secretaria da Fazenda. Seria a op%c%co mais barata e mais prec%cria, mas seria\n\
aplicada junto a implanta%c%co de diretrizes r%cgidas para a obten%c%co, processamento e arquivamento de dados,\n\
al%cm de padr%ces para envio de relat%crios %c Fazenda.\n\n", 135, 198, 163, 162, 135,\
133, 135, 198, 198, 135, 181, 135, 198, 135, 198, 135, 228, 136, 135, 198, 135, 228, 162, 198, 135, 228, 135, 198, 135, 161,\
160, 135, 198, 135, 198, 162, 198, 160, 160, 162, 198, 160, 135, 198, 160, 135, 198, 161, 135, 198, 130, 228, 162, 133); break;
		}
		case 2 : {
			printf ("\nQuest%co 2) \n\n\
IPTU, ISS, Taxas e contribui%c%ces de melhoria s%co diferentes formas de arredaca%c%co da administra%c%co\n\
municipal. As tabelas e valores s%co definidos em lei e, portanto, fogem da al%cada da gest%co t%ccnica. No\n\
entanto, sabe-se que h%c altas taxas de evas%co ou inadimpl%cncia em seu munic%cpio devido a fatores\n\
desconhecidos pela gest%co.\n\n\
Adaptando as defini%c%ces de RAINER (p.42) de 'press%ces nos neg%ccios' para press%ces na administra%c%co\n\
p%cblica, poder%camos dizer que a baixa arrecada%c%co seria uma press%co econ%cmica, a qual demandaria uma\n\
s%crie de a%c%ces como resposta organizacional.\n\n\
Voc%c ficou respons%cvel em obter dados que explicassem a evas%co fiscal e propor solu%c%ces para tal situa%c%co.\n\
Escolha uma primeira medida para reverter esta tend%cncia e recuperar a arrecada%c%co do munic%cpio:\n\n", 198, 135, 228, 198,\
135, 198, 135, 198, 198, 135, 198, 130, 160, 198, 136, 161, 198, 135, 228, 228, 162, 228, 135, 198, 163, 161, 135, 198, 198,\
147, 130, 135, 228, 136, 160, 198, 135, 228, 135, 198, 136, 135, 198, 161);
			system("PAUSE");
			printf ("\nA) Usar banco de dados de CNPJs estabelecidos na cidade e cruzar informa%c%ces das contribui%c%ces fiscais para\n\
observar se h%c padr%ces na evas%co fiscal e intensificar a penaliza%c%co sobre os eventuais sonegadores.\n\n\
B) Georreferenciar bols%ces de menor arrecada%c%co para descobrir se a evas%co est%c relacionada a n%cveis de\n\
pobreza ou a neg%ccios com dificuldades financeiras, a fim de oferecer programas de renegocia%c%co, educa%c%co\n\
financeira e import%cncia da contribui%c%co.\n\n\
C) Instalar sistema informatizado para controle dos lan%camentos e recolhimentos fiscais, padronizando as a%c%ces\n\
dos fiscais tribut%crios e intensificando a vigil%cncia e negocia%c%co sobre os contribuintes.\n\n\
D) Reavaliar toda a cadeia de processos referentes %c fiscaliza%c%co tribut%cria e implantar uma BPI: H%c fiscais\n\
suficientes? Os bancos de dados atendem %cs necessidades? Os fiscais agem com dilig%cncia e em conformidade com\n\
as leis e procedimentos corretos? Implantar mudan%cas internas mais urgentes apenas ap%cs avalia%c%co.\n\n\
E) N%co h%c tempo para entender o problema. %c preciso estabelecer metas na fiscaliza%c%co e intensificar a\n\
aplica%c%co de multas %cs empresas e donos de im%cveis sonegadores.\n\n", 135, 228, 135, 228, 160, 228, 198, 135, 198,\
228, 135, 198, 198, 160, 161, 162, 135, 198, 135, 198, 131, 135, 198, 135, 135, 228, 160, 131, 135, 198, 133, 135, 198,\
160, 160, 133, 136, 135, 162, 135, 198, 198, 160, 130, 135, 198, 135, 198, 133, 162); break;
		}
		case 3 : {
			printf ("\nQuest%co 3) \n\n\
H%c uma longa fila de espera de m%ces e pais que necessitam de vagas em creches para seus filhos de 0 a 5 anos de idade.\n\
Considerando que creches funcionam em per%codo integral e, diferente de escolas, n%co pode haver rotatividade entre\n\
turnos, voc%c prop%ce a seguinte resposta organizacional (RAINER, p. 50) para melhorar esta situa%c%co:\n\n", 198, 160, 198,\
161, 198, 136, 228, 135, 198);
			system("PAUSE");
			printf ("\nA) Iniciar a terceiriza%c%co da gest%co das unidades para controle de O.S.s e alugar novos im%cveis para\n\
amplia%c%co r%cpida do sistema de educa%c%co infantil.\n\n\
B) Aumentar a quantidade de vagas atrav%cs da sobrecarga do sistema e contrata%c%co tempor%cria de mais cuidadores\n\
e educadores.\n\n\
C) Estabelecer contratos com creches privadas e oferecer as vagas subsidiadas %cs fam%clias mais carentes.\n\n\
D) Identificar bairros com maior demanda para prioriza%c%co na escolha de locais para constru%c%co ou amplia%c%co\n\
de creches.\n\n\
E) Desenvolver sistema unificado de distribui%c%co das vagas existentes segundo escalonamento das fam%clia\n\
conforme sua pontua%c%co, calculada segundo a renda familiar, se %c monoparental, idade da crian%ca fora da\n\
creche, e quantidade de filhos em idade escolar. Fam%clias menos priorit%crias teriam de aguardar novas vagas.\n\n", 135, 198,\
198, 162, 135, 198, 160, 135, 198, 130, 135, 198, 160, 133, 161, 135, 198, 135, 198, 135, 198, 135, 198, 161, 135, 198, 130,\
135, 161, 160); break;
		}
		case 4 : {
			printf ("\nQuest%co 4) \n\n\
Esculturas p%cblicas, bancos de pra%cas, pontos de %cnibus, lixeiras e outros itens s%co parte do que chamamos\n\
de mobili%crio urbano. Ultimamente est%c sendo deteriorada a preserva%c%co deste mobili%crio, pois muitos deles\n\
j%c est%co velhos e outros est%co sofrendo com a%c%ces de depreda%c%co.\n\n\
Para isso, pensando em como a prefeitura ir%c medir e analisar ('fase de medi%c%co' e 'fase de an%clise' da BPI.\n\
RAINER, p. 39) o grau e velocidade das deteriora%c%ces, voc%c prop%cs o seguinte modelo:\n\n", 198, 163, 135, 147, 198,\
160, 160, 135, 198, 160, 160, 198, 198, 135, 228, 135, 198, 160, 135, 198, 160, 135, 228, 136, 147);
			system("PAUSE");
			printf ("\nA) Contratar uma empresa terceirizada que ser%c respons%cvel pela fiscaliza%c%co e manuten%c%co deste\n\
conjunto de itens, fornecendo %c prefeitura relat%crios peri%cdicos das causas de danos, identifica%c%co dos itens\n\
danificados e motivo para trocas dos mesmos.\n\n\
B) Usar o efetivo da Guarda Municipal para realizar rondas nos locais de maior n%cmero de ocorr%cncias das\n\
degrada%c%ces e orient%c-los nos procedimentos de registro do mobili%crio que necessitem de reposi%c%co.\n\n\
C) Estabelecer sistema de monitoramento por c%cmeras nos locais de maior circula%c%co de pessoas para inibir a\n\
a%c%co de depredadores e agilizar a reposi%c%co de pe%cas degradadas.\n\n\
D) Desenvolver um 'Sistema Patrimonial do Mobili%crio Urbano' com uso de localizadores geogr%cficos e fiscaliza%c%co\n\
regular. Os itens receberiam um n%cmero e localizador, com descri%c%co de suas caracter%csticas no sistema, data de\n\
instala%c%co, data de %cltimo restauro etc., e receberia fiscaliza%c%co presencial anual (ou eventual, para casos de\n\
den%cncias) para avaliar seu estado de deteriora%c%co e necessidade de reposi%c%co ou restauro.\n\n\
E) Criar 'Canal Direto com o Cidad%co' para reclama%c%ces relativas ao estado de conserva%c%co do mobili%crio urbano\n\
e processamento destes dados.\n\n", 160, 160, 135, 198, 135, 198, 133, 162, 162, 135, 198, 163, 136, 135, 228, 160, 160,\
135, 198, 131, 135, 198, 135, 198, 135, 198, 135, 160, 160, 135, 198, 163, 135, 198, 161, 135, 198, 163, 135, 198, 163,\
135, 198, 135, 198, 198, 135, 228, 135, 198, 160); break;
		}
		case 5 : {
			printf ("\nQuest%co 5) \n\n\
Uma doen%ca pand%cmica acaba de atingir sua cidade, provocando a sobrecarga no atendimento ambulatorial das\n\
Unidades de Sa%cde.\n\
Uma resposta organizacional r%cpida dever%c ser tomada para amenizar o problema. Devido %c urg%cncia do problema,\n\
apenas duas op%c%ces poder%co ser feitas de imediato (segundo as medidas de desempenho competitivo (RAINER, p. 38)):\n\n\
1) Melhorar a satisfa%c%co do usu%crio: contrata%c%co emergencial (e aumento de horas-extra) de atendentes,\n\
m%cdicos e enfermeiros para enfrentar  o aumento na demanda.\n\n\
2) Reduzir o tempo de ciclo e execu%c%co: separar fisicamente os usu%crios conforme sua doen%ca. Os atingidos\n\
pela doen%ca pand%cmica ser%co encaminhados em unidades espec%cficas onde ter%co atendimento com procedimentos\n\
padronizados e sequencialmente organizados conforme a gravidade de cada doente.\n\n\
3) Produtividade: estabelecer crit%crios m%cdicos informatizados para avalia%c%co r%cpida de pacientes em estado\n\
pouco preocupante e encaminh%c-los para resguardo dom%cstico a fim de desafogar o sistema para pacientes em estado\n\
grave.\n\n\
4) Redu%c%co de custo: aumentar o n%cmero de leitos por m%c nas Unidades de Sa%cde e hospitais e comprar insumos\n\
hospitalares de fornecedores mais baratos.\n\n\
5) Diferencia%c%co: realizar campanhas de conscientiza%c%co para meios de preven%c%co da nova doen%ca.\n\n", 198, 135, 136,\
163, 160, 160, 133, 136, 135, 228, 198, 135, 198, 160, 135, 198, 130, 135, 198, 160, 135, 135, 136, 198, 161, 198, 130, 130,\
135, 198, 160, 160, 130, 135, 198, 163, 253, 163, 135, 198, 135, 198, 135, 198, 135);
			system("PAUSE");
			printf ("\nEscolha:\n\n\
A) 1 e 2.\n\n\
B) 1 e 5.\n\n\
C) 2 e 3.\n\n\
D) 3 e 4.\n\n\
E) 4 e 5.\n\n"); break;
		}
		case 6 : {
			printf ("Questao 6)\n\n\
Em determinado municipio a prefeitura disponibiliza canais de atendimento para sugestoes e reclamacoes. Apos\n\
um periodo de analises das informacoes fornecidas pela populacao, verificou-se que os indices descrevem filas\n\
grandes para retirada de medicamentos como um problema, ainda que exista uma quantidade boa de profissionais\n\
disponiveis. Pensando em melhorar sua gestao, o prefeito decide, junto a secretaria municipal de saude,\n\
implementar melhorias no servico, a fim de atender as necessidades dos clientes. Considerando o processo como\n\
uma sequencia de atividades logicas executadas com a finalidade de agregar valor ao servico, quais praticas sao\n\
recomendadas estao de acordo com o texto de GONCALVES, 'As empresas sao grandes colecoes de processos'.\n\n");
			system("PAUSE");
			printf ("A) Considerar as necessidades da populacao e criar um sistema de fichas que devem ser distribuidas por ordem de\n\
chegada, alem de deixar bancos a disposicao para que seja possivel as pessoas aguardarem sentadas, o que evitara a\n\
formacao de filas.\n\n\
B) Coletar feedback dos clientes externos e combina-los com as informacoes recebidas dos clientes internos,\n\
tornando possivel mapear os processos e a implementar melhorias eficazes.\n\n\
C) Implementar o modelo de processos coordenados, com a divisao de tarefas entre os funcionarios que atuam no\n\
setor, mesmo que em alguns momentos um deles fique ocioso, pois isso permitira que cada um seja dono do seu processo.\n\n\
D) Investir um grande volume de dinheiro criando mais unidades de distribuiçao e contratar mais funcionarios.\n\n\
E) Entender como funciona o processo de distribuicao de farmacos, verificar se o sistema de registro de input e\n\
eficiente, definir os horario com maior fluxo, quais os perfis de clientes e a viabilidade de criar uma categoria\n\
de atendimento por agendamento.\n\n"); break;
		}
		case 7 : {
			printf ("Questao 7)\n\n\
Mobilidade urbana e um dos indicadores de qualidade de vida da populacao. Com isso em mente, o prefeito deseja\n\
implementar melhorias na cidade, e sabe que e necessario planejamento. Por que o entendimento dos processos sera\n\
importante para planejar mudancas, de acordo com o texto de GONCALVES, 'As empresas sao grandes colecoes de\n\
processos'?\n\n");
			system("PAUSE");
			printf ("A) Permite obtencao de novas estrategias e aprimoramentos, a simulacao de funcionamento de novas formas\n\
operacionais e maior controle sobre as atividades existentes.\n\n\
B) Torna possivel a existencia de planos abrangentes sem previa pesquisa do espaço e da dinamica social.\n\n\
C) Da a certeza de que o projeto sera realizado com eficiencia e eficacia, mesmo que existam atrasos e gastos\n\
despendiosos, alem do que foi planejado.\n\n\
D) Permite que gestor ignore o feedback dos municipes, pois nem todos entendem de processos e das necessidades\n\
geograficas. Os resultados serao o suficiente para mudar a opiniao popular.\n\n\
E) O gestor tera embasamento e podera controlar rigorosamente os processos, sem que sejam necessarias adaptacoes\n\
imprevistas para garantir a eficacia.\n\n"); break;
		}
		case 8 : {
			printf ("Questao 8)\n\n\
Durante o verao muitas localidades sofrem com enchentes. Sabendo disso, o gestor de uma cidade decide criar\n\
medidas preventivas, como a construcao de sistema de drenagens, para que no proximo ano a populacao local nao\n\
seja afetada pelas aguas torrenciais. Durante a etapa planejamento, foram mapeados os processos necessarios e\n\
ficou decidido que parte da equipe de gestao e uma empresa contratada promoverao essa melhoria. Qual a sequencia\n\
correta da execucao do projeto para alcançar os objetivos determinados, usando como referencia GONCALVES,\n\
'As empresas sao grandes colecoes de processos'?\n\n");
			system("PAUSE");
			printf ("A) Atribuicao, planejamento, execucao, monitoramento e conclusao.\n\n\
B) Planejamento, atribuicao, execucao, monitoramento e conclusao.\n\n\
C) Atribuicao, planejamento, monitoramento, execucao e conclusao.\n\n\
D) Planejamento, atribuicao, monitoramento, execucao e conclusao.\n\n\
E) Planejamento, atribuicao, execucao e conclusao.\n\n"); break;
		}
		case 9 : {
			printf ("Questao 9)\n\n\
(Reflita a partir do texto GONCALVES, 'As empresas sao grandes colecoes de processos')\n\
Voce se encontra em um conflito de prioridades dentro de uma organizacao da prefeitura de sua cidade. A populacao\n\
esta insatisfeita com a lideranca atual, e voce precisa tomar uma acao emergencial para evitar uma grande queda\n\
na popularidade da gestao. Voce sugere a gestao: \n\n");
			system("PAUSE");
			printf ("A) Iniciar uma campanha para explicar as dificuldades que envolvem a gestao da prefeitura, pedindo a compreensao\n\
da populacao.\n\n\
B) Divulgar diversas acoes ja estao sendo tomadas em resposta as criticas da populacao, e promete que serao\n\
entregues em breve.\n\n\
C) Fazer um discurso publico para conversar diretamente com a populacao e demonstrar um comprometimento real\n\
com suas preocupacoes.\n\n\
D) Lancar um programa de transparencia, relatando as obras em andamento, os projetos futuros e criando um portal\n\
para receber e acompanhar as reclamacoes da populacao.\n\n\
E) Renegociar contratos com fornecedores para reduzir gastos, priorizando a alocacao de recursos nas areas mais\n\
necessitadas, ainda que algumas obras sejam adiadas.\n\n"); break;
		}
		case 10 : {
			printf ("Questao 10)\n\n\
(Reflita a partir do texto GONCALVES, 'As empresas sao grandes colecoes de processos')\n\
Voce recebeu feedback de que a satisfacao dos servidores na admnistracao esta em declinio, o que pode\n\
afetar a produtividade e o clima organizacional. E crucial agir para melhorar a situacao.\n\n\
Qual abordagem voce escolhe para aumentar a satisfacao dos servidores?\n\n");
			system("PAUSE");
			printf ("A) Implementar pesquisas de clima organizacional regulares para identificar as principais preocupacoes\n\
e feedback dos servidores, com a promessa de implementar melhorias com base nos resultados.\n\n\
B) Promover atividades de integracao e eventos sociais regulares para fortalecer os relacionamentos entre\n\
os servidores e criar um ambiente de trabalho mais colaborativo.\n\n\
C) Oferecer treinamentos e capacitacoes para o desenvolvimento profissional dos servidores, ajudando-os a\n\
aprimorar suas habilidades e progredir em suas carreiras.\n\n\
D) Estabelecer uma politica de reconhecimento e recompensa que valorize e premie o desempenho dos servidores,\n\
incentivando a produtividade e o engajamento.\n\n\
E) Criar um programa de saude e bem-estar que ofereca suporte psicologico, atividades fisicas e palestras sobre\n\
saude mental, visando promover o bem-estar geral dos servidores.\n\n"); break;
		}
	}

}

void exibe_questao_2 (int questao_n) { // Banco de questões a serem exibidas
	switch (questao_n) {
		case 1 : {
			printf ("Questao 1)\n\n\
Em uma instituicao de ensino privada os funcionarios responsaveis por controlar o acesso se queixaram de\n\
dificuldades para executar suas atividades com eficiencia, visto que a estrutura nao contribui para a validacao\n\
de acesso ao predio. Uma investigacao mais detalhada, indicou que em horarios especificos ficava inviavel fazer\n\
essa confirmacao de crachas devido ao alto fluxo de pessoas.  Considerando o texto de GONCALVES, 'As empresas sao\n\
grandes colecoes de processos', conforme o modelo de gestao colaborativa apresentado, qual o posicionamento ideal\n\
na busca de solucoes nesta situacao?\n\n");
			system("PAUSE");
			printf ("A) Valorizar as habilidades dos colaboradores e instiga-los a trabalhar com os recursos\n\
disponiveis.\n\n\
B) Compartilhar as informacoes entre todos os setores para que individuos nao autorizados fossem localizados\n\
internamente e retirados pelos funcionarios.\n\n\
C) Integrar as equipes na tomada de decisao, possibilitando que novas ideias possam ser analisadas e testadas,\n\
valorizando as perspectivas diversas.\n\n\
D) Deslocar funcionarios de outros setores para realizar o controle de acesso, a fim de  melhorar a dinamica no\n\
horario de pico e gerar a colaboracao entre equipes multifuncionais.\n\n\
E) Dispensar a verificacao e permitir acesso livre as dependencias, criando um sentimento de pertencimento entre\n\
alunos e funcionarios.\n\n"); break;
		}
		case 2 : {
			printf ("Questao 2)\n\n\
Ao analisar o cenario externo da organizacao Zincon Cosmeticos, os dados indicaram ameaca de novos entrantes no setor,\n\
ou seja, concorrentes se consolidando no mercado. Alem disso, foi averiguado que os produtos ofertados pela Zincon\n\
Cosmeticos ja nao eram mais exclusividade, em questao de qualidade e tecnologia.\n\
Considerando as 5 Forcas de Porter a organizacao passa por um momento delicado, pois sofre com diversas ameacas:\n\n\
--Rivalidade entre concorrentes\n\
--Poder de barganha dos clientes (outputs)\n\
--Poder de barganha dos fornecedores (inputs)\n\n\
Diante desse cenario, o gestor, apoiado por investidores e pelos  setores estrategicos da empresa, e instigado\n\
a tomar decisoes estrategicas. Considerando que o cliente avalia o que recebe em relacao ao que paga, ignorando\n\
os processos internos, e a Cadeia de Valor proposta por Porter, qual  a melhor alternativa a ser considerada,\n\
sabendo a necessidade de diferenciacao da marca?\n\
Referencia: GONCALVES, 'As empresas sao grandes colecoes de processos' e  GONCALVES 'Processo que processo?'.\n\n");
			system("PAUSE");
			printf ("A) Firmar alianca com os Investidores para manter os custos, investir em embalagens que diferencie o produto e elevar\n\
o preco final focando em atender uma nova categoria de clientes.\n\n\
B) Apostar na fidelidade do cliente e manter o valor fixo, realizando cortes de empregados e desconsiderando o\n\
poder de barganha dos fornecedores.\n\n\
C) Firmar alianca com os Investidores para manter os custos, apostar na tradicao da marca para criar propagandas\n\
de identificacao e investir em pesquisa e tecnologia para melhorar os processos de transformacao.\n\n\
D) Direcionar a empresa para exercer papel de ameaca a novos segmentos mais abrangentes e de facil insercao, mudando\n\
o foco da empresa. Para isso, investir em novos processos e fornecedores.\n\n\
E) Aceitar o poder de barganha dos fornecedores e dos clientes, pagando mais pela materia prima e reduzindo o valor\n\
do produto final para manter-se lider no mercado.\n\n"); break;
		}
		case 3 : {
			printf ("Questao 3)\n\n\
Voce esta realizando uma consultoria em uma pequena empresa. Ao analisar a situacao atual, percebe que existem\n\
problemas em diferentes niveis dos processos da organizacao. Com base nas informacoes a seguir, qual acao voce\n\
sugere para melhorar a estrutura e a eficiencia da empresa?\n\
Referencia: GONCALVES, 'As empresas sao grandes colecoes de processos'.\n\n");
			system("PAUSE");
			printf ("A) Os processos de compra de materiais nao possuem um responsavel delegado para a funcao especifica. Voce sugere\n\
delegar formalmente essa responsabilidade a um funcionario especifico para melhorar a organizacao e a responsabilidade\n\
nos processos de compras.\n\n\
B) Voce identifica um nivel de conflito gerencial entre setores e sugere uma divisao clara entre as responsabilidades\n\
dos setores para diminuir os conflitos e melhorar a cooperacao interna.\n\n\
C) A empresa nao possui um organograma formalmente definido, e apenas o nivel dos funcionarios operacionais esta\n\
claro. Voce propoe uma analise completa para criar um organograma que esclareca as hierarquias e as responsabilidades.\n\n\
D) Voce nota uma deficiencia em um dos setores de producao e, para evitar custos adicionais, decide realocar recursos\n\
humanos de outros setores para reforcar o setor deficiente.\n\n\
E) No processo de compra de materiais, voce sugere um grande investimento em automacao para reduzir custos a longo\n\
prazo e aumentar a eficiencia.\n\n"); break;
		}
		case 4 : {
			printf ("Questao 4)\n\n\
E necessario reorganizar um processo de producao e, para isso, sera preciso elaborar um novo treinamento para os\n\
operarios mais antigos e os novos. Que tipo de atitudes voce prioriza durante esses treinos?\n\
Referencia: GONCALVES, 'As empresas sao grandes colecoes de processos'.\n\n");
			system("PAUSE");
			printf ("A) Separar o treinamento em dois grupos diferentes (novatos e veteranos) para ofececer treinamento mais direcionado.\n\n\
B) Realizar um treinamento unificado dentro da infraestrutura da organizacao, buscando um treino mais pratico.\n\n\
C) Terceirizar o processo de treinamento e focar em outros processos durante esse periodo.\n\n\
D) O orcamento esta apertado, e e preciso economizar. Sendo assim, sera passado apenas um roteiro do novo sistema,\n\
e os colaboradores serao responsaveis por aprender por conta propria.\n\n\
E) Implementar mentoria entre os operarios mais experientes e os novatos, onde os veteranos podem guiar e ensinar\n\
os novos colaboradores diretamente no ambiente de trabalho.\n\n"); break;
		}
		case 5 : {
			printf ("Questao 5)\n\n\
Durante a leitura do artigo 'Empresas: Colecao de Processos' (Revista de Administracao de Empresas, 2020), diversos\n\
exemplos de processos empresariais sao mencionados. Em um estudo de caso, voce e incumbido de sugerir melhorias\n\
na empresa. Devido a limitacao de recursos e tempo, e necessario dar prioridade a tres processos dentro da\n\
organizacao.\n\n\
Qual conjunto de processos voce prioriza reestruturar?\n\n");
			system("PAUSE");
			printf ("A) Definicao de visao, gerencia de contas, gestao de orçamento empresarial.\n\
Foco principal no setor de administracao, porem, outros setores podem sofrer com a falta de atencao.\n\n\
B) Introducao de produto, pesquisa de marketing, gestao de qualidade.\n\
Foco em produto e marketing, mas setores como suporte e tecnologia podem ser afetados.\n\n\
C) Planejamento de recursos humanos, recrutamento e selecao, registro e controle de patentes.\n\
Foco centralizado em recursos humanos.\n\n\
D) Gestao de parcerias, consultoria, planejamento de investimento.\n\
Foco em comunicacao empresarial e parcerias estrategicas.\n\n\
E) Implementacao de novas tecnologias, automacao de processos, seguranca da informacao.\n\
Foco em inovacao tecnologica e automacao, com potencial impacto positivo na eficiencia operacional, mas outros setores\n\
podem ficar temporariamente sem recursos.\n\n"); break;
		}
		case 6 : {
			printf ("");
			system("PAUSE");
			printf (""); break;
		}
		case 7 : {
			printf ("");
			system("PAUSE");
			printf (""); break;
		}
		case 8 : {
			printf ("");
			system("PAUSE");
			printf (""); break;
		}
		case 9 : {
			printf ("");
			system("PAUSE");
			printf (""); break;
		}
		case 10 : {
			printf ("");
			system("PAUSE");
			printf (""); break;
		}
	}

}
