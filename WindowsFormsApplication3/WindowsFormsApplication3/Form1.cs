using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace WindowsFormsApplication3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

            if (comboBox1.SelectedIndex == 0)
            {
                comboBox2.Items.Clear();
                comboBox2.Items.Add("Миллиграмм");
                comboBox2.Items.Add("Грамм");
                comboBox2.Items.Add("Килограмм");
                comboBox2.Items.Add("Центнер");
                comboBox2.Items.Add("Тонна");
                comboBox2.Items.Add("Карат");
                comboBox2.Items.Add("Русский фунт");
                comboBox2.Items.Add("Английский фунт");
                comboBox2.Items.Add("Пуд");
            }
            else if (comboBox1.SelectedIndex == 1)
            {
                comboBox2.Items.Clear();
                comboBox2.Items.Add("Год");
                comboBox2.Items.Add("Неделя");
                comboBox2.Items.Add("Сутки");
                comboBox2.Items.Add("Час");
                comboBox2.Items.Add("Минута");
                comboBox2.Items.Add("Секунда");

            }
            else if (comboBox1.SelectedIndex == 2)
            {
                comboBox2.Items.Clear();
                comboBox2.Items.Add("Км/с");
                comboBox2.Items.Add("м/с");
                comboBox2.Items.Add("км/ч");
                comboBox2.Items.Add("м/ч");
            }
            else if (comboBox1.SelectedIndex == 3)
            {
                comboBox2.Items.Clear();
                comboBox2.Items.Add("Кубический метр");
                comboBox2.Items.Add("Кубический дециметр");
                comboBox2.Items.Add("Кубический сантиметр");
                comboBox2.Items.Add("Кубический миллиметр");
                comboBox2.Items.Add("Литр");
            }
            else if (comboBox1.SelectedIndex == 4)
            {
                comboBox2.Items.Clear();
                comboBox2.Items.Add("Километр");
                comboBox2.Items.Add("Метр");
                comboBox2.Items.Add("Дециметр");
                comboBox2.Items.Add("Сантиметр");
                comboBox2.Items.Add("Миллиметр");
                comboBox2.Items.Add("Фут");
                comboBox2.Items.Add("Ярд");
            }
            else if (comboBox1.SelectedIndex == 5)
            {
                comboBox2.Items.Clear();
                comboBox2.Items.Add("Квадратный километр");
                comboBox2.Items.Add("Гектар");
                comboBox2.Items.Add("Дектар");
                comboBox2.Items.Add("Квадратный метр");
                comboBox2.Items.Add("Квадратный сантиметр");
                comboBox2.Items.Add("Квадратный миллиметр");
            }
            if (comboBox1.SelectedIndex == 0)
            {
                comboBox3.Items.Clear();
                comboBox3.Items.Add("Миллиграмм");
                comboBox3.Items.Add("Грамм");
                comboBox3.Items.Add("Килограмм");
                comboBox3.Items.Add("Центнер");
                comboBox3.Items.Add("Тонна");
                comboBox3.Items.Add("Карат");
                comboBox3.Items.Add("Русский фунт");
                comboBox3.Items.Add("Английский фунт");
                comboBox3.Items.Add("Пуд");
            }
            else if (comboBox1.SelectedIndex == 1)
            {
                comboBox3.Items.Clear();
                comboBox3.Items.Add("Год");
                comboBox3.Items.Add("Неделя");
                comboBox3.Items.Add("Сутки");
                comboBox3.Items.Add("Час");
                comboBox3.Items.Add("Минута");
                comboBox3.Items.Add("Секунда");

            }
            else if (comboBox1.SelectedIndex == 2)
            {
                comboBox3.Items.Clear();
                comboBox3.Items.Add("Км/с");
                comboBox3.Items.Add("м/с");
                comboBox3.Items.Add("км/ч");
                comboBox3.Items.Add("м/ч");
            }
            else if (comboBox1.SelectedIndex == 3)
            {
                comboBox3.Items.Clear();
                comboBox3.Items.Add("Кубический метр");
                comboBox3.Items.Add("Кубический дециметр");
                comboBox3.Items.Add("Кубический сантиметр");
                comboBox3.Items.Add("Кубический миллиметр");
                comboBox3.Items.Add("Литр");
            }
            else if (comboBox1.SelectedIndex == 4)
            {
                comboBox3.Items.Clear();
                comboBox3.Items.Add("Километр");
                comboBox3.Items.Add("Метр");
                comboBox3.Items.Add("Дециметр");
                comboBox3.Items.Add("Сантиметр");
                comboBox3.Items.Add("Миллиметр");
                comboBox3.Items.Add("Фут");
                comboBox3.Items.Add("Ярд");
            }
            else if (comboBox1.SelectedIndex == 5)
            {
                comboBox3.Items.Clear();
                comboBox3.Items.Add("Квадратный километр");
                comboBox3.Items.Add("Гектар");
                comboBox3.Items.Add("Дектар");
                comboBox3.Items.Add("Квадратный метр");
                comboBox3.Items.Add("Квадратный сантиметр");
                comboBox3.Items.Add("Квадратный миллиметр");
            }

        }


        private void button1_Click_1(object sender, EventArgs e)
        {
            Close();
        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {


            textBox1.Clear();
            float x = Convert.ToSingle(textBox2.Text); //x-Входное число
                switch (comboBox1.SelectedIndex)
                {

                    case 0:
                    //Вес и масса
                    switch (comboBox2.SelectedIndex)
                        {
                            case 0:
                                switch (comboBox3.SelectedIndex)
                                {                   
                                    case 0:
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 100000000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x /= 200;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= 409500;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x /= 453600;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x /= 16380000;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x /= 28350;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 1:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 100000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 5;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= (float)409.5;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x /= (float)453.6;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x /= 16380;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x /= (float)28.35;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 2:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 100;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 5000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= (float)2.442;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x *= (float)2.205;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x /= (float)16.38;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x /= (float)35.27;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 3:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 100000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= 100000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 10;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 500000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= (float)244.2;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x *= (float)220.5;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x *= (float)6.105;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x *= 3527;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 4:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 10;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 500000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 2442;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x *= 2205;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x *= (float)61.05;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x *= 35270;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 5:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 200;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 5;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 5000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 500000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 5000000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= 2048;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x /= 2268;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x /= 81900;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x /= (float)147.7;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 6:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 409500;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= (float)409.5;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= (float)2.442;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= (float)244.2;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 2442;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 2048;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x /= (float)1.108;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x /= 40;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x *= (float)14.45;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 7:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 453600;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= (float)453.6;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= (float)2.205;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 2205;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 2205;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 2268;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= (float)1.108;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x /= (float)36.11;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x *= 16;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 8:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 16380000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= 13680;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= (float)16.38;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= (float)0.164;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= (float)0.0164;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 81900;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 40;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x *= (float)36.11;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        textBox1.Text += (x); break;
                                    case 9:
                                        x *= (float)577.8;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 9:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x *= 28350;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= (float)28.35;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= (float)0.0283;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 3527;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 35270;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= (float)141.7;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= (float)0.0692;
                                        textBox1.Text += (x); break;
                                    case 7:
                                        x *= (float)0.0625;
                                        textBox1.Text += (x); break;
                                    case 8:
                                        x *= (float)0.00173;
                                        textBox1.Text += (x); break;
                                    case 9:
                                        textBox1.Text += (x); break;
                                }
                                break;
                        }
                        break;
                    case 1:
                    // Время
                        switch (comboBox2.SelectedIndex)
                        {
                            case 0:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= 52;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 365;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 8766;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 526000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 31560000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 1:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 52;
                                        textBox1.Text += (x); break;
                                    case 1: textBox1.Text += (x); break;
                                    case 2:
                                        x *= 7;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 168;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 10080;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 604800;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 2:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 365;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 7;
                                        textBox1.Text += (x); break;
                                    case 2: textBox1.Text += (x); break;
                                    case 3:
                                        x *= 24;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 168;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 10080;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 3:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 8760;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 168;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 24;
                                        textBox1.Text += (x); break;
                                    case 3: textBox1.Text += (x); break;
                                    case 4:
                                        x *= 60;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 3600;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 4:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 526000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 10080;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 1440;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 60;
                                        textBox1.Text += (x); break;
                                    case 4: textBox1.Text += (x); break;
                                    case 5:
                                        x *= 60;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 5:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 31560000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 604800;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 86400;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 3600;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 60;
                                        textBox1.Text += (x); break;
                                    case 5: textBox1.Text += (x); break;
                                }
                                break;
                        }
                        break;
                    case 2:
                    // Скорость
                        switch (comboBox2.SelectedIndex)
                        {
                            case 0:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0: textBox1.Text += (x); break;
                                    case 1:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 3600;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 60000;
                                        textBox1.Text += (x); break;

                                }
                                break;
                            case 1:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 1: textBox1.Text += (x); break;
                                    case 2:
                                        x *= (float)3.6;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 60;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 2:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 3600;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x *= (float)0.2778;
                                        textBox1.Text += (x); break;
                                    case 2: textBox1.Text += (x); break;
                                    case 3:
                                        x *= (float)16.67;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 3:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 60000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 60;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= (float)0.06;
                                        textBox1.Text += (x); break;
                                    case 3: textBox1.Text += (x); break;
                                }
                                break;
                        }
                        break;
                    case 3:
                    // Объем
                        switch (comboBox2.SelectedIndex)
                        {
                            case 0:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0: textBox1.Text += (x); break;
                                    case 1:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 1:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 2:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 3:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 4:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        textBox1.Text += (x); break;
                                }
                                break;
                        }
                        break;
                    case 4:
                    // Длина
                        switch (comboBox2.SelectedIndex)
                        {
                            case 0:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0: textBox1.Text += (x); break;
                                    case 1:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 10000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 100000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 3281;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 1094;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 1:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 1: textBox1.Text += (x); break;
                                    case 2:
                                        x *= 10;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= (float)3.281;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= (float)1.094;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 2:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 10000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 10;
                                        textBox1.Text += (x); break;
                                    case 2: textBox1.Text += (x); break;
                                    case 3:
                                        x *= 10;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x /= (float)3.048;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= (float)9.144;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 3:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 100000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 100;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 10;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 10;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x /= (float)30.48;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= (float)91.44;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 4:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 100;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 10;
                                        textBox1.Text += (x); break;
                                    case 4: textBox1.Text += (x); break;
                                    case 5:
                                        x /= (float)304.8;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= (float)914.4;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 5:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 3281;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= (float)3.281;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= (float)0.328;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 3048;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= (float)304.8;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x /= 3;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 6:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1094;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= (float)1.094;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= (float)0.109;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= (float)91.44;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= (float)914.4;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 3;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        textBox1.Text += (x); break;
                                }
                                break;
                        }
                        break;
                    case 5:
                    //Площадь
                        switch (comboBox2.SelectedIndex)
                        {
                            case 0:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0: textBox1.Text += (x); break;
                                    case 1:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 10000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 1000000000000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 1:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 100;
                                        textBox1.Text += (x); break;
                                    case 1: textBox1.Text += (x); break;
                                    case 2:
                                        x *= 10;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 10000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 100000000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 10000000000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 2:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 10;
                                        textBox1.Text += (x); break;
                                    case 2: textBox1.Text += (x); break;
                                    case 3:
                                        x *= 10;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x *= 1000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 10000000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 1000000000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 3:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 10000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 100;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 10;
                                        textBox1.Text += (x); break;
                                    case 3: textBox1.Text += (x); break;
                                    case 4:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 100000000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 4:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 10000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 100;
                                        textBox1.Text += (x); break;
                                    case 4: textBox1.Text += (x); break;
                                    case 5:
                                        x *= 10000;
                                        textBox1.Text += (x); break;
                                    case 6:
                                        x *= 1000000;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 5:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 100000000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 10000000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 10000;
                                        textBox1.Text += (x); break;
                                    case 5: textBox1.Text += (x); break;
                                    case 6:
                                        x *= 100;
                                        textBox1.Text += (x); break;
                                }
                                break;
                            case 6:
                                switch (comboBox3.SelectedIndex)
                                {
                                    case 0:
                                        x /= 1000000000000;
                                        textBox1.Text += (x); break;
                                    case 1:
                                        x /= 10000000000;
                                        textBox1.Text += (x); break;
                                    case 2:
                                        x /= 1000000000;
                                        textBox1.Text += (x); break;
                                    case 3:
                                        x /= 100000000;
                                        textBox1.Text += (x); break;
                                    case 4:
                                        x /= 1000000;
                                        textBox1.Text += (x); break;
                                    case 5:
                                        x /= 1000;
                                        textBox1.Text += (x); break;
                                    case 6: textBox1.Text += (x); break;
                                }
                                break;
                        }
                        break;


                }

        
    
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            comboBox1.Items.Add("Вес и Масса");
            comboBox1.Items.Add("Время");
            comboBox1.Items.Add("Скорость");
            comboBox1.Items.Add("Объём");
            comboBox1.Items.Add("Длина");
            comboBox1.Items.Add("Площадь");
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            char[] allowch = { '\b' };
            if (e.KeyChar == ',' && ((TextBox)sender).Text.Length > 0 && !(((TextBox)sender).Text.Contains(',')))
            { e.Handled = false;
                return;
            };
            if (!Char.IsNumber(e.KeyChar) && !allowch.Contains(e.KeyChar)) e.Handled = true;
            if (!(Char.IsDigit(e.KeyChar)))
            {
                if (e.KeyChar == '.' || e.KeyChar == ',' || e.KeyChar == (char)Keys.Back)
                {
                    if (e.KeyChar == (char)Keys.Back)
                    {

                    }
                    else
                        if (textBox1.Text.Contains(",") || textBox1.Text.Contains("."))
                    {
                        e.Handled = true;
                    }
                }
                else
                {
                    e.Handled = true;
                }
            }
        //запрет на ввод букв(только цифры и знаки)
      } 
    }
}


