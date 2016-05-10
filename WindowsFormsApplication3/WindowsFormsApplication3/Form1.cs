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
    public partial class Form1: Form
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
          if(comboBox1.SelectedIndex==0)
            {
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
            else if(comboBox1.SelectedIndex == 1)
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

        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
           
        }

    }
    }
