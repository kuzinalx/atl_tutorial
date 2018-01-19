Public Class Form1
    Dim poly As New PolygonLib.PolyCtl

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        'Dim p As New PolygonLib.PolyCtl
        Dim nsides As Integer
        nsides = poly.Sides
        MessageBox.Show("Polygon has " + Str(nsides) + " vertices")
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        poly.Sides = 8
    End Sub
End Class
